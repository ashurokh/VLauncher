// vLauncherRELOADED.cpp: главный файл проекта.

#include "stdafx.h"
#include "Form1.h"
#include <Windows.h>
using namespace vLauncherRELOADED;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Включение визуальных эффектов Windows XP до создания каких-либо элементов управления
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Form1 ^f1=gcnew Form1;
	Application::Run(f1);
	return 0;
}
