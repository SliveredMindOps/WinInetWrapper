#include "stdafx.h"
#include "dllmain.h"

HMODULE WinInetModule = NULL;

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
		Initialize();
		break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

void Initialize() {
	AllocConsole();
	ConsoleWrite("Attached \n");
}

void LoadWinInet() {
	if (WinInetModule != NULL)
		return;
	char buffer[MAX_PATH];
	GetSystemDirectoryA(buffer, MAX_PATH);
	strcat_s(buffer, "\\wininet.dll");
	ConsoleWrite("Load original DLL at ");
	ConsoleWrite(buffer);
	ConsoleWrite("\n");
	if (WinInetModule == NULL) {
		WinInetModule = LoadLibraryA(buffer);
	}

	if (WinInetModule == NULL)
	{
		OutputDebugStringA("PROXYDLL: Original wininet.dll not loaded ERROR ****\r\n");
	}
}