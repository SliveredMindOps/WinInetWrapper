#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN
#include <windows.h>



void ConsoleWrite(const char *lpBuffer);
void ConsoleWriteW(LPCWSTR lpBuffer);