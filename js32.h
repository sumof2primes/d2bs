#pragma comment(lib, "psapi.lib") // Added to support GetProcessMemoryInfo()
#pragma once

#ifndef XP_WIN
#define XP_WIN
#endif

//#ifndef DEBUG
//#define DEBUG
//#define WDEBUG
//#endif

//#ifdef WDEBUG
//#undef DEBUG
//#undef WDEBUG
//#endif
//#include "Exports.hpp"
#include <io.h>
#include <fstream>
#include <streambuf>
#include <string>
#include <vector>

typedef unsigned int uint;
typedef unsigned int uint32;
typedef int int32;
typedef unsigned int jsrefcount;
typedef double jsdouble;
typedef int jsint;
typedef unsigned int jsuint;
typedef unsigned short uint16;

#if defined(EXPORTING)
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif
// this should be included, but can't be due to compiler include cycles
// however, every file that includes this one includes ScriptEngine.h first anyway
//#include "ScriptEngine.h"
#define NUM(x) #x
#define NAME(line, v) (__FILE__ ":" NUM(line) " -> " #v)
