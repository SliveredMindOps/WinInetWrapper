#include "stdafx.h"
HANDLE stdHandle = NULL;
void ConsoleWrite(const char *lpBuffer) {
	if (stdHandle == NULL)
		stdHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	WriteConsole(stdHandle, lpBuffer, strlen(lpBuffer), NULL, NULL);
}

void ConsoleWriteW(LPCWSTR lpBuffer) {
	if (stdHandle == NULL)
		stdHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	WriteConsoleW(stdHandle, lpBuffer, lstrlenW(lpBuffer), NULL, NULL);
}