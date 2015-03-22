// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the TUT4_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// TUT4_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef TUT4_EXPORTS
#define TUT4_API __declspec(dllexport)
#else
#define TUT4_API __declspec(dllimport)
#endif
// This class is exported from the Tut4.dll
class TUT4_API CTut4 {
	int value;
	
	CTut4* Next;
public:
	CTut4 *first;
	CTut4(void);
	void push(int);
	void pop();
	void isFull();
	void isEmpty();
	int peek();
	
};

extern TUT4_API int nTut4;

TUT4_API int fnTut4(void);
