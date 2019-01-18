
#ifndef QUICKRTS_NATIVE_CWNDCLASS_H_
#define QUICKRTS_NATIVE_CWNDCLASS_H_

#include <Windows.h>
#include <core/decl.h>

// #class CWndClass
// Provides a wrapper to Windows' native WNDCLASS
class CWndClass : protected WNDCLASSEX
{
public:
	// Default Constructor
	CWndClass();

	// Constructs a CWndClass from the name of the class.
	CWndClass(const char* pszName);

	// Constructs a CWndClass from the name of the class
	// and the Window Process.
	CWndClass(const char* pszName, WNDPROC wndProc);

	// Constructs a CWndClass from the name of the class
	// and the HINSTANCE.
	CWndClass(const char* pszName, HINSTANCE hInstance);

	// Constructs a CWndClass from the name of the class,
	// the HINSTANCE and the WNDPROC.
	CWndClass(const char* pszName, HINSTANCE hInstance, WNDPROC wndProc);

public:
	FORCEINLINE void SetName(const char* lpszName) { lpszClassName = lpszName; }
	FORCEINLINE const char* GetName() { return lpszClassName; }

	FORCEINLINE void SetStyle(unsigned int style) { this->style = style; }
	FORCEINLINE unsigned int GetStyle() { return style; }

	FORCEINLINE void SetWindowProcess(WNDPROC wndProc) { this->lpfnWndProc = wndProc; }
//	FORCEINLINE WNDPROC GetWindowProcess() { return this->lpfnWndProc; }
public:
	// #groupdoc
	// Attempts to register the window class.
	bool Register();
	bool Register(HINSTANCE hInstance);
	// #endgroup
};

#endif //QUICKRTS_NATIVE_CWNDCLASS_H_
