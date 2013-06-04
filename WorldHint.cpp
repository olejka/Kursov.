// WordHint.cpp : main project file.

#include "stdafx.h"
#include "frMain.h"

using namespace WordHint;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
  // Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew frMain());
	return 0;
}
