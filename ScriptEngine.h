#pragma once
#ifndef __SCRIPTENGINE_H__
#define __SCRIPTENGINE_H__

#include <list>
#include <map>
#include <string>

#include "js32.h"
#include "Script.h"

typedef std::map<std::wstring, Script*> ScriptMap;

typedef bool(__fastcall* ScriptCallback)(Script*, void*, uint);

enum EngineState { Starting, Running, Paused, Stopping, Stopped };

class ScriptEngine {
    ScriptEngine(void){};
    virtual ~ScriptEngine(void) = 0;
    ScriptEngine(const ScriptEngine&);
    ScriptEngine& operator=(const ScriptEngine&);
    static Script* console;
    static EngineState state;
    static std::list<Event*> DelayedExecList;
    static int delayedExecKey;
    static CRITICAL_SECTION scriptListLock;

  public:
    friend class Script;
    static ScriptMap scripts;

    static CRITICAL_SECTION lock;
    static BOOL Startup(void);
    static void Shutdown(void);
    static EngineState GetState(void) {
        return state;
    }

    static void FlushCache(void);

    static Script* CompileFile(const wchar_t* file, ScriptState state, uint argc = 0, void** argv = NULL, bool recompile = false);
    static void RunCommand(const wchar_t* command);
    static void DisposeScript(Script* script);

    static void LockScriptList(char* loc);
    static void UnLockScriptList(char* loc);

    static bool ForEachScript(ScriptCallback callback, void* argv, uint argc);
    static unsigned int GetCount(bool active = true, bool unexecuted = false);


    static void StopAll(bool forceStop = false);
    static void UpdateConsole();
    static int AddDelayedEvent(Event* evt, int freq);
    static void RemoveDelayedEvent(int key);
};

// these ForEachScript helpers are exposed in case they can be of use somewhere
bool __fastcall StopIngameScript(Script* script, void*, uint);
bool __fastcall ExecEventOnScript(Script* script, void* argv, uint argc);
struct EventHelper {
    char* evtName;
    void** argv;
    uint argc;
    bool executed;
};
bool operationCallback(void* cx);
bool contextCallback(void* cx, uint contextOp);
void reportError(void* cx, const char* message, void* report);
bool ExecScriptEvent(Event* evt, bool clearList);
void CALLBACK EventTimerProc(LPVOID lpArg, DWORD dwTimerLowValue, DWORD dwTimerHighValue);
#endif
