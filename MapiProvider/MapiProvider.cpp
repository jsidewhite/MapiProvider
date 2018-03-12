// MapiProvider.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

#include <mapi.h>
#include <mapix.h>

extern "C" HRESULT __declspec(dllexport) MAPIInitialize(
  LPVOID lpMapiInit
)
{
    MessageBoxW(nullptr, L"init", L"jih", MB_OK);
    return S_OK;
}

extern "C" HRESULT __declspec(dllexport) MAPILogonEx(
  ULONG_PTR ulUIParam,
  LPSTR lpszProfileName,
  LPSTR lpszPassword,
  FLAGS flFlags,
  LPMAPISESSION FAR * lppSession
)
{
    MessageBoxW(nullptr, L"hihi", L"jih", MB_OK);
    return S_OK;
}
