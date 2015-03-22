// Tut4.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Tut4.h"


// This is an example of an exported variable
TUT4_API int nTut4=0;

// This is an example of an exported function.
TUT4_API int fnTut4(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see Tut4.h for the class definition
CTut4::CTut4()
{
	return;
}
