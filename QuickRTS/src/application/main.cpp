
//-----------------------------------------------------------------------------
// QuickRTS Main File.
// This file will create the engine and the game and start everything.
//-----------------------------------------------------------------------------


// We only currently support windows.
// This is future to change, but that's what there is for now.
#if !defined( _WIN32 )
#error "QuickRTS doesn't currently support any platform other than Windows."
#endif

#include <Windows.h>
#include <exception>


//-----------------------------------------------------------------------------
// Main program function.
// This is just about where everything begins.
//-----------------------------------------------------------------------------
int RealMain(HINSTANCE hInstance, LPSTR lpCmdLine, int nCmdShow)
{
	// TODO: Initialize.

	return 0;
}

//-----------------------------------------------------------------------------
// The actual entry point of the program.
// This is used as a global try-catch loop to make sure we are able to handle
// all exceptions ourselves.
//-----------------------------------------------------------------------------
int APIENTRY WinMain(HINSTANCE hInstance, LPSTR lpCmdLine, int nCmdShow)
{
	try
	{
		RealMain(hInstance, lpCmdLine, nCmdShow);
	}
	catch (std::exception e)
	{
		// TODO: Handle exception.
	}
	catch (...)
	{
		// TODO: Handle exception.
	}
}