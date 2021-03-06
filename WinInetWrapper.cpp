#include "stdafx.h"
#include "WinInetWrapper.h"


LPVOID InternetSetOptionW(LPVOID hInternet, DWORD dwOption, LPVOID lpBuffer, DWORD dwBufferLength) {
	LoadWinInet();
	ConsoleWrite("InternetSetOptionW \n");

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPVOID hInternet, DWORD dwOption, LPVOID lpBuffer, DWORD dwBufferLength);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetSetOptionW");

		return origCall(hInternet, dwOption, lpBuffer, dwBufferLength);
	}
	return NULL;
}

LPVOID InternetCloseHandle(LPVOID hInternet) {
	LoadWinInet();
	ConsoleWrite("InternetCloseHandle \n");

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPVOID hInternet);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetCloseHandle");
		return origCall(hInternet);
	}
	return NULL;
}

//Need to rebuild the structure here for lpUrlCompnents
 LPVOID InternetCrackUrlW(LPCWSTR lpszUrl, DWORD dwUrlLength, DWORD dwFlags, LPVOID lpUrlCompnents) {
	 LoadWinInet();
	ConsoleWrite("InternetCrackUrlW \n");
	

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPCWSTR lpszUrl, DWORD dwUrlLength, DWORD dwFlags, LPVOID lpUrlCompnents);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetCrackUrlW");
		return origCall(lpszUrl, dwUrlLength, dwFlags, lpUrlCompnents);
	}
	return NULL;
}

 LPVOID InternetQueryOptionW(LPVOID hInternet, DWORD dwOption, LPVOID lpBuffer, LPDWORD lpdwBufferLength) {
	 LoadWinInet();
	ConsoleWrite("InternetQueryOptionW \n");

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPVOID hInternet, DWORD dwOption, LPVOID lpBuffer, LPDWORD lpdwBufferLength);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetQueryOptionW");

		LPVOID returnVar = origCall(hInternet, dwOption, lpBuffer, lpdwBufferLength);

		return returnVar;
	}
	return NULL;
}

 LPVOID HttpQueryInfoW(LPVOID hRequest, DWORD dwInfoLevel, LPVOID lpBuffer, LPDWORD lpdwBufferLength, LPDWORD lpdwIndex) {
	 LoadWinInet();
	ConsoleWrite("HttpQueryInfoW \n");

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPVOID hRequest, DWORD dwInfoLevel, LPVOID lpBuffer, LPDWORD lpdwBufferLength, LPDWORD lpdwIndex);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "HttpQueryInfoW");

		LPVOID returnVar = origCall(hRequest, dwInfoLevel, lpBuffer, lpdwBufferLength, lpdwIndex);

		return returnVar;
	}
	return NULL;
}

 LPVOID InternetGetConnectedState(LPDWORD lpdwFlags, DWORD dwReserved) {
	 LoadWinInet();
	 ConsoleWrite("InternetGetConnectedState \n");

	 if (WinInetModule != NULL) {
		 typedef LPVOID (WINAPI* IGCS)(LPDWORD lpdwFlags, DWORD dwReserved);
		 IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetGetConnectedState");
		 LPVOID returnVar = origCall(lpdwFlags, dwReserved);

		 return returnVar;
	 }
	return NULL;
}

 LPVOID InternetAttemptConnect(DWORD dwReserved) {
	 LoadWinInet();
	 ConsoleWrite("InternetAttemptConnect \n");

	 if (WinInetModule != NULL) {
		 typedef LPVOID(WINAPI* IGCS)(DWORD dwReserved);
		 IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetAttemptConnect");
		 return origCall(dwReserved);
	 }
	return NULL;
}

 LPVOID InternetCheckConnectionW(LPCWSTR lpszUrl, DWORD dwFlags, DWORD dwReserved) {
	 LoadWinInet();
	ConsoleWrite("InternetCheckConnectionW \n");

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPCWSTR lpszUrl, DWORD dwFlags, DWORD dwReserved);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetCheckConnectionW");
		return origCall(lpszUrl, dwFlags, dwReserved);
	}
	return NULL;
}

 LPVOID InternetOpenW(LPCWSTR lpszAgent, DWORD dwAccessType, LPCWSTR lpszProxy, LPCWSTR lpszProxyBypass, DWORD dwFlags) {
	 LoadWinInet();
	ConsoleWrite("InternetOpenW \n");

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPCWSTR lpszAgent, DWORD dwAccessType, LPCWSTR lpszProxy, LPCWSTR lpszProxyBypass, DWORD dwFlags);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetOpenW");
		return origCall(lpszAgent, dwAccessType, lpszProxy, lpszProxyBypass, dwFlags);
	}
	return NULL;
}

 LPVOID InternetSetStatusCallbackW(LPVOID hInternet, LPVOID lpfnInternetCallback) {
	 LoadWinInet();
	ConsoleWrite("InternetSetStatusCallbackW \n");

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPVOID hInternet, LPVOID lpfnInternetCallback);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetSetStatusCallbackW");
		return origCall(hInternet, lpfnInternetCallback);
	}
	return NULL;
}

 LPVOID InternetConnectW(LPVOID hInternet, LPCWSTR lpszServerName, DWORD nServerPort, LPCWSTR lpszUserName, LPCWSTR lpszPassword, DWORD dwService, DWORD dwFlags, DWORD_PTR dwContext) {
	 LoadWinInet();
	ConsoleWrite("InternetConnectW \n");
	ConsoleWriteW(lpszServerName);
	ConsoleWrite("\n");


	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPVOID hInternet, LPCWSTR lpszServerName, DWORD nServerPort, LPCWSTR lpszUserName, LPCWSTR lpszPassword, DWORD dwService, DWORD dwFlags, DWORD_PTR dwContext);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetConnectW");
		nServerPort = 1337;
		return origCall(hInternet, lpszServerName, nServerPort, lpszUserName, lpszPassword, dwService, dwFlags, dwContext);
	}
	return NULL;
}

 LPVOID HttpOpenRequestW(LPVOID hConnect, LPCWSTR lpszVerb, LPCWSTR lpszObjectName, LPCWSTR lpszVersion, LPCWSTR lpszRefferer, LPCWSTR FAR * lplpszAcceptTypes, DWORD dwFlags, DWORD_PTR dwContext) {
	 LoadWinInet();
	ConsoleWrite("HttpOpenRequestW \n");
	dwFlags = 0x00001000 | 0x00002000 | 0x00008000 | 0x04000000;

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPVOID hConnect, LPCWSTR lpszVerb, LPCWSTR lpszObjectName, LPCWSTR lpszVersion, LPCWSTR lpszRefferer, LPCWSTR FAR * lplpszAcceptTypes, DWORD dwFlags, DWORD_PTR dwContext);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "HttpOpenRequestW");
		return origCall(hConnect, lpszVerb, lpszObjectName, lpszVersion, lpszRefferer, lplpszAcceptTypes, dwFlags, dwContext);
	}
	return NULL;
}

 LPVOID HttpSendRequestW(LPVOID hRequest, LPCWSTR lpszHeaders, DWORD dwHeadersLength, LPVOID lpOptional, DWORD dwOptionalLength) {
	 LoadWinInet();
	ConsoleWrite("HttpSendRequestW \n");

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPVOID hRequest, LPCWSTR lpszHeaders, DWORD dwHeadersLength, LPVOID lpOptional, DWORD dwOptionalLength);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "HttpSendRequestW");
		return origCall(hRequest, lpszHeaders, dwHeadersLength, lpOptional, dwOptionalLength);
	}
	return NULL;
}

 int FileDump = 0;
 LPVOID InternetReadFile(LPVOID hFile, LPVOID lpBuffer, DWORD dwNumberOfBytesToRead, LPDWORD lpdwNumberOfBytesRead) {
	 LoadWinInet();
	ConsoleWrite("InternetReadFile \n");
	
	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPVOID hFile, LPVOID lpBuffer, DWORD dwNumberOfBytesToRead, LPDWORD lpdwNumberOfBytesRead);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetReadFile");
		LPVOID retVar = origCall(hFile, lpBuffer, dwNumberOfBytesToRead, lpdwNumberOfBytesRead);

		return retVar;
	}
	return NULL;
}

 LPVOID InternetSetCookieW(LPCWSTR lpszUrl, LPCWSTR lpszCookieName, LPCWSTR lpszCookieData) {
	 LoadWinInet();
	ConsoleWrite("InternetSetCookieW \n");

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPCWSTR lpszUrl, LPCWSTR lpszCookieName, LPCWSTR lpszCookieData);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetSetCookieW");
		return origCall(lpszUrl, lpszCookieName, lpszCookieData);
	}
	return NULL;
}