#include "page1.h"
#include "page3.h"
#include <cliext\vector>
//#using <System.dll>
using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace std;
[STAThreadAttribute]
int main(cli::array < System::String^ > ^ args) {
	

	/*Team16UserController::page3^ p3 = gcnew Team16UserController::page3;
	Team16UserController::node^ n = gcnew Team16UserController::node;
	cliext::vector<Team16UserController::node^>v;

	n->readFromFile("tempData.txt", v);
	p3->displayData(v);
*/
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Team16UserController::page1 form;
	Application::Run(%form);
	

	/*Team16UserController::page3 form3;
	Application::Run(%form3);*/

	return 0;
}










	//Team16UserController::node^ n = gcnew Team16UserController::node("asds", "asddf", "wer", "ga");
	//
	////vector with pointer to point 
	//cliext:: vector<Team16UserController::node^>v;
	
	//Team16UserController::page3^ p = gcnew Team16UserController::page3();

	////access readFromFile function to read data from a file
	//String^ filename = "tempData.txt";
	//StreamReader^ inputFile = File::OpenText(filename);
	//Console::WriteLine("trying to open file {0}...", filename);

	//String^ line;
	//int count = 0;
	//while ((line = inputFile->ReadLine()) != nullptr)
	//{
	//	count++;
	//	Console::WriteLine("line {0}: {1}", count, line);

	//}
	//create a node to push at the end of the vector
	//v.push_back(n);
	

