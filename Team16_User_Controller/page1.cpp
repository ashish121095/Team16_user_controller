#include "page1.h"
#include "page3.h"
#include <cliext\vector>
//#using <System.dll>
using namespace System;
using namespace System::Windows::Forms;
using namespace std;
[STAThreadAttribute]
int main(cli::array < System::String^ > ^ args) {
	
	//Team16UserController::page3 p3("ads", "asddf", "wer", "ga");

	Team16UserController::node^ n = gcnew Team16UserController::node("asds", "asddf", "wer", "ga");
	
	//vector with pointer to point 
	cliext:: vector<Team16UserController::node^>v;
	
	//create a node to push at the end of the vector
	v.push_back(n);
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Team16UserController::page1 form;
	Application::Run(%form);

	return 0;
}