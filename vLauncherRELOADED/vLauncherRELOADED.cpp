// vLauncherRELOADED.cpp: ������� ���� �������.

#include "stdafx.h"
#include "Form1.h"
#include <Windows.h>
using namespace vLauncherRELOADED;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Form1 ^f1=gcnew Form1;
	Application::Run(f1);
	return 0;
}
