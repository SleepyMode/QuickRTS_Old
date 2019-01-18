
#include <native/cwndclass.h>


// Default Window Process
static LRESULT CALLBACK _DefaultWindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	return ::DefWindowProc(hWnd, uMsg, wParam, lParam);
}


CWndClass::CWndClass()
{
	lpfnWndProc = _DefaultWindowProc;

	lpszMenuName = 0;

	cbSize = sizeof(WNDCLASSEX);
	cbClsExtra = 0;
	cbWndExtra = 0;
	style = 0;

	// Just some icons so it won't cry out.
	// Feel free to not set this to anything actually.
	hIcon	= LoadIcon(NULL, IDI_APPLICATION);
	hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	hCursor = LoadCursor(NULL, IDC_ARROW);

	// This should do.
	// I hope.
	hbrBackground = static_cast<HBRUSH>( GetStockObject(COLOR_BTNFACE) );
}

CWndClass::CWndClass(const char* pszName)
{
	lpfnWndProc = _DefaultWindowProc;

	lpszClassName = pszName;
	lpszMenuName = 0;

	cbSize = sizeof(WNDCLASSEX);
	cbClsExtra = 0;
	cbWndExtra = 0;
	style = 0;

	// Just some icons so it won't cry out.
	// Feel free to not set this to anything actually.
	hIcon = LoadIcon(NULL, IDI_APPLICATION);
	hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	hCursor = LoadCursor(NULL, IDC_ARROW);

	// This should do.
	// I hope.
	hbrBackground = static_cast<HBRUSH>(GetStockObject(COLOR_BTNFACE));
}

CWndClass::CWndClass(const char* pszName, WNDPROC wndProc)
{
	lpfnWndProc = wndProc;

	lpszClassName = pszName;
	lpszMenuName = 0;

	cbSize = sizeof(WNDCLASSEX);
	cbClsExtra = 0;
	cbWndExtra = 0;
	style = 0;

	// Just some icons so it won't cry out.
	// Feel free to not set this to anything actually.
	hIcon = LoadIcon(NULL, IDI_APPLICATION);
	hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	hCursor = LoadCursor(NULL, IDC_ARROW);

	// This should do.
	// I hope.
	hbrBackground = static_cast<HBRUSH>(GetStockObject(COLOR_BTNFACE));
}

CWndClass::CWndClass(const char* pszName, HINSTANCE hInstance)
{
	lpfnWndProc = _DefaultWindowProc;
	this->hInstance = hInstance;

	lpszClassName = pszName;
	lpszMenuName = 0;

	cbSize = sizeof(WNDCLASSEX);
	cbClsExtra = 0;
	cbWndExtra = 0;
	style = 0;

	// Just some icons so it won't cry out.
	// Feel free to not set this to anything actually.
	hIcon = LoadIcon(NULL, IDI_APPLICATION);
	hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	hCursor = LoadCursor(NULL, IDC_ARROW);

	// This should do.
	// I hope.
	hbrBackground = static_cast<HBRUSH>(GetStockObject(COLOR_BTNFACE));
}

CWndClass::CWndClass(const char* pszName, HINSTANCE hInstance, WNDPROC wndProc)
{
	lpfnWndProc = wndProc;
	this->hInstance = hInstance;

	lpszClassName = pszName;
	lpszMenuName = 0;

	cbSize = sizeof(WNDCLASSEX);
	cbClsExtra = 0;
	cbWndExtra = 0;
	style = 0;

	// Just some icons so it won't cry out.
	// Feel free to not set this to anything actually.
	hIcon = LoadIcon(NULL, IDI_APPLICATION);
	hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	hCursor = LoadCursor(NULL, IDC_ARROW);

	// This should do.
	// I hope.
	hbrBackground = static_cast<HBRUSH>(GetStockObject(COLOR_BTNFACE));
}

bool CWndClass::Register()
{
	return !!(RegisterClassEx(this));
}

bool CWndClass::Register(HINSTANCE hInstance)
{
	return RegisterClassEx(this) != false;
}
