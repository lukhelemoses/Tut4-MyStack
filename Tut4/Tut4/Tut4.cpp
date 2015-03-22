// Tut4.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Tut4.h"
#include<iostream>
using namespace std;


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
	first = NULL;
	return;
}
void CTut4::push(int in_value)
{
	CTut4* mylist = new CTut4;
	mylist->value=in_value;
	mylist->Next = first;
	first = mylist;
}
void CTut4::pop()
{
	CTut4 mylist;
	CTut4*curr_Node;
	curr_Node = mylist.first;
	while (curr_Node != NULL)
	{
		cout << curr_Node->value;
		curr_Node->Next;

	}

}