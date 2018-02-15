#include "page1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array <String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Team16UserController::page1 form;
	Application::Run(%form);
	return 0;
}