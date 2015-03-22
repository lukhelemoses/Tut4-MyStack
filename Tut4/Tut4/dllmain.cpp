// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"
#include<iostream>
#include "Tut4.h"
using namespace std;
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}

	CTut4 mylist;
	mylist.push(1);
	mylist.push(2);
	mylist.push(5);
	mylist.pop();


	return TRUE;
}

	