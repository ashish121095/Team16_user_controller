#include "page1.h"
#include "page3.h"
#include <vector>
using namespace System;
using namespace System::Windows::Forms;
using namespace std;
[STAThreadAttribute]
int main(cli::array < System::String^ > ^ args) {
	
	Team16UserController::page3 p3();

	
	//std::vector <

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Team16UserController::page1 form;
	Application::Run(%form);

	return 0;
}