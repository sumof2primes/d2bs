#include <io.h>
#include <algorithm>

#include "Constants.h"
#include "Core.h"
#include "D2BS.h"
#include "D2Ptrs.h"
#include "Helpers.h"
#include "Script.h"
#include "ScriptEngine.h"

using namespace std;

Script::Script(const wchar_t* file, ScriptState state, uint argc, void** argv)
	: execCount(0)
	, isAborted(false)
	, isPaused(false)
	, isReallyPaused(false)
	, scriptState(state)
	, threadHandle(INVALID_HANDLE_VALUE)
	, threadId(0)
	, argc(argc)
	, argv(argv)
{
	InitializeCriticalSection(&lock);
	// moved the runtime initilization to thread start
	LastGC = 0;
	hasActiveCX = false;
	eventSignal = CreateEvent(nullptr, true, false, nullptr);

	if (scriptState == Command && wcslen(file) < 1)
	{
		fileName = wstring(L"Command Line");
	}
	else
	{
		if (_waccess(file, 0) != 0)
		{
			DEBUG_LOG(file);

			throw std::exception("File not found");
		}

		wchar_t* tmpName = _wcsdup(file);
		if (!tmpName) throw std::exception("Could not dup filename");

		_wcslwr_s(tmpName, wcslen(file) + 1);
		fileName = wstring(tmpName);
		replace(fileName.begin(), fileName.end(), L'/', L'\\');
		free(tmpName);
	}
}

Script::~Script(void)
{
	isAborted = true;
	hasActiveCX = false;
	// JS_SetPendingException(context, JSVAL_NULL);

	EnterCriticalSection(&lock);
	//    JS_SetRuntimeThread(rt);

	CloseHandle(eventSignal);
	includes.clear();
	if (threadHandle != INVALID_HANDLE_VALUE) CloseHandle(threadHandle);
	LeaveCriticalSection(&lock);
	DeleteCriticalSection(&lock);
}

int Script::GetExecutionCount(void)
{
	return execCount;
}

DWORD Script::GetThreadId(void)
{
	return (threadHandle == INVALID_HANDLE_VALUE ? -1 : threadId);
}

void Script::RunCommand(const wchar_t* command)
{
	// RUNCOMMANDSTRUCT* rcs = new RUNCOMMANDSTRUCT;
	// rcs->script = this;
	// rcs->command = _wcsdup(command);

	if (isAborted)
	{ // this should never happen -bob
		// RUNCOMMANDSTRUCT* rcs = new RUNCOMMANDSTRUCT;

		// rcs->script = this;
		// rcs->command = _wcsdup(L"delay(1000000);");

		Log(L"Console Aborted HELP!");
		// HANDLE hwnd = CreateThread(NULL, 0, RunCommandThread, (void*) rcs, 0, NULL);
	}

	Event* evt = new Event;
	evt->owner = this;
	evt->argc = argc;
	evt->name = _strdup("Command");
	evt->arg1 = _wcsdup(command);
	EnterCriticalSection(&Vars.cEventSection);
	evt->owner->EventList.push_front(evt);
	LeaveCriticalSection(&Vars.cEventSection);
	evt->owner->TriggerOperationCallback();
	SetEvent(evt->owner->eventSignal);
}

bool Script::BeginThread(LPTHREAD_START_ROUTINE ThreadFunc)
{
	EnterCriticalSection(&lock);
	DWORD dwExitCode = STILL_ACTIVE;

	if ((!GetExitCodeThread(threadHandle, &dwExitCode) || dwExitCode != STILL_ACTIVE) &&
		(threadHandle = CreateThread(0, 0, ThreadFunc, this, 0, &threadId)) != NULL)
	{
		LeaveCriticalSection(&lock);
		return true;
	}

	threadHandle = INVALID_HANDLE_VALUE;
	LeaveCriticalSection(&lock);
	return false;
}

void Script::Run(void)
{
}

void Script::UpdatePlayerGid(void)
{
	(D2CLIENT_GetPlayerUnit() == NULL ? NULL : D2CLIENT_GetPlayerUnit()->dwUnitId);
}

void Script::Pause(void)
{
	if (!IsAborted() && !IsPaused()) isPaused = true;
	TriggerOperationCallback();
	SetEvent(eventSignal);
}

void Script::Join()
{
	EnterCriticalSection(&lock);
	HANDLE hThread = threadHandle;
	LeaveCriticalSection(&lock);

	if (hThread != INVALID_HANDLE_VALUE) WaitForSingleObject(hThread, INFINITE);
}

void Script::Resume(void)
{
	if (!IsAborted() && IsPaused()) isPaused = false;
	TriggerOperationCallback();
	SetEvent(eventSignal);
}

bool Script::IsPaused(void)
{
	return isPaused;
}

const wchar_t* Script::GetShortFilename()
{
	if (wcscmp(fileName.c_str(), L"Command Line") == 0)
		return fileName.c_str();
	else
		return (fileName.c_str() + wcslen(Vars.szScriptPath) + 1);
}

void Script::Stop(bool force, bool reallyForce)
{
	// if we've already stopped, just return
	if (isAborted) return;
	EnterCriticalSection(&lock);
	// tell everyone else that the script is aborted FIRST
	isAborted = true;
	isPaused = false;
	isReallyPaused = false;
	if (GetState() != Command)
	{
		const wchar_t* displayName = fileName.c_str() + wcslen(Vars.szScriptPath) + 1;
		Print(L"Script %s ended", displayName);
	}

	// trigger call back so script ends
	TriggerOperationCallback();
	SetEvent(eventSignal);

	// normal wait: 500ms, forced wait: 300ms, really forced wait: 100ms
	int maxCount = (force ? (reallyForce ? 10 : 30) : 50);
	if (GetCurrentThreadId() != GetThreadId())
	{
		for (int i = 0; hasActiveCX == true; i++)
		{
			// if we pass the time frame, just ignore the wait because the thread will end forcefully anyway
			if (i >= maxCount) break;
			Sleep(10);
		}
	}
	LeaveCriticalSection(&lock);
}

bool Script::IsIncluded(const wchar_t* file)
{
	uint count = 0;
	wchar_t* fname = _wcsdup(file);
	if (!fname) return false;

	_wcslwr_s(fname, wcslen(fname) + 1);
	StringReplace(fname, '/', '\\', wcslen(fname));
	count = includes.count(wstring(fname));
	free(fname);

	return !!count;
}

bool Script::Include(const wchar_t* file)
{
	bool rval = false;

	return rval;
}

bool Script::IsRunning(void)
{
	return !(IsAborted() || IsPaused() || !hasActiveCX);
}

bool Script::IsAborted()
{
	return isAborted;
}

bool Script::IsListenerRegistered(const char* evtName)
{
	return strlen(evtName) > 0;
}

void Script::RegisterEvent(const char* evtName, void* evtFunc)
{
}

bool Script::IsRegisteredEvent(const char* evtName, void* evtFunc)
{
	return false;
}

void Script::UnregisterEvent(const char* evtName, void* evtFunc)
{
}

void Script::ClearEvent(const char* evtName)
{
}

void Script::ClearAllEvents(void)
{
}
void Script::FireEvent(Event* evt)
{
	// EnterCriticalSection(&ScriptEngine::lock);
	EnterCriticalSection(&Vars.cEventSection);
	evt->owner->EventList.push_front(evt);
	LeaveCriticalSection(&Vars.cEventSection);

	if (evt->owner && evt->owner->IsRunning())
	{
		evt->owner->TriggerOperationCallback();
	}
	SetEvent(eventSignal);
	// LeaveCriticalSection(&ScriptEngine::lock);
}

#ifdef DEBUG
typedef struct tagTHREADNAME_INFO
{
	DWORD dwType;     // must be 0x1000
	LPCWSTR szName;   // pointer to name (in user addr space)
	DWORD dwThreadID; // thread ID (-1=caller thread)
	DWORD dwFlags;    // reserved for future use, must be zero
} THREADNAME_INFO;

void SetThreadName(DWORD dwThreadID, LPCWSTR szThreadName)
{
	THREADNAME_INFO info;
	info.dwType = 0x1000;
	info.szName = szThreadName;
	info.dwThreadID = dwThreadID;
	info.dwFlags = 0;

	__try
	{
		RaiseException(0x406D1388, 0, sizeof(info) / sizeof(DWORD), (DWORD*)&info);
	}
	__except (EXCEPTION_CONTINUE_EXECUTION)
	{
	}
}
#endif

DWORD WINAPI RunCommandThread(void* data)
{
	RUNCOMMANDSTRUCT* rcs = (RUNCOMMANDSTRUCT*)data;
	return 0;
}

DWORD WINAPI ScriptThread(void* data)
{
	Script* script = (Script*)data;
	if (script)
	{
#ifdef DEBUG
		SetThreadName(0xFFFFFFFF, script->GetShortFilename());
#endif
		script->Run();
		if (Vars.bDisableCache) ScriptEngine::DisposeScript(script);
	}
	return 0;
}
