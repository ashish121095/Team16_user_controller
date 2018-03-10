#include "page3.h"
#include <cliext\vector>
#using <System.dll>
#include <string>
#define ARRAY_SIZE 4;
using namespace System::IO;
using namespace std;
//still unsure if I need this or not
//Team16UserController::page3::page3(System::String ^ dtime, System::String ^ dGps, System::String ^ dSpeed, System::String ^ dAltitude)
//{
//	/*time = dtime;
//	gps = dGps;
//	speed = dSpeed;
//	altitude = dAltitude;*/
//}

//Team16UserController::page3::page3() {

//}
void Team16UserController::page3::readFromFile(System::String ^ filename, cliext::vector<Team16UserController::node^>v)
{

	StreamReader^ inputFile = File::OpenText(filename);
	Console::WriteLine("trying to open file {0}...", filename);

	String^ line;
	int count = 0;
	line = inputFile->ReadLine();

	//Button
	//while ((line = inputFile->ReadLine())!=nullptr)
	//{
	//	Team16UserController::node^ node = gcnew Team16UserController::node("fgh","wer","sdfg","asd");
	//	
	//}
	
}

cli::array<System::String^>^ Team16UserController::page3::readEachLine(System::String^ line)
{
	//cliext::vector<System::String^>vec;
	cli::array<String^>^ strarray= gcnew cli::array<String^>(4);

	return strarray;
}


Team16UserController::node::node(void) {
	gps = nullptr;
	speed = nullptr;
	time = nullptr;
	altitude = nullptr;
	next->next = nullptr;
}
Team16UserController::node::node(System::String ^ dtime, System::String ^ dGps, System::String ^ dSpeed, System::String ^ dAltitude) {
	gps = dGps;
	time = dtime;
	speed = dSpeed;;
	altitude = dAltitude;
}

Team16UserController::node::~node()
{
	throw gcnew System::NotImplementedException();
}



//add data of drone
//void Team16UserController::node::addData(System::String ^ dtime, System::String ^ dGps, System::String ^ dSpeed, System::String ^ dAltitude)
//{
//	droneData
//
//
//
//}
//function to read data from a file
//
//list::list() {
//	node* next = NULL;
//}
//
//void list::addData(string dTime, string dGps, string dSpeed, string dAltitude) {
//	
//	node *newNode = new node;
//	newNode->time = dTime;
//	newNode->gps = dGps;
//	newNode->speed= dSpeed;
//	newNode->altitude= dAltitude;
//	newNode->next= NULL;
//
//}
//