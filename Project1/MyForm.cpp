#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Project1::MyForm form;
    Application::Run(% form);
}

