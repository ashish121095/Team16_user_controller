#include "page3.h"
#include "page3_node.h"
#include <string>
#include <iostream>
#include <fstream>
#include <strstream>
#include<sstream>

#define ARRAY_SIZE 4;
using namespace System::IO;
using namespace std;


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


void Team16UserController::node::readFromFile(std::string filename, cliext::vector<node^> v)
{
	node^ n = gcnew node();
	std::string data;
	cliext::vector<System::String^> eachLineData;
	ifstream inFile(filename);
	while (getline(inFile, data)) {

		std::istringstream ss(data);
		string token;
		while (getline(ss, token, ',')) {
			String^ eachData = gcnew String(token.c_str());
			eachLineData.push_back(eachData);
		}

		n->gps = eachLineData[0];
		n->time = eachLineData[1];
		n->speed = eachLineData[2];
		n->altitude = eachLineData[3];

		v.push_back(n);
	}
}

//std::vector<std::string>Team16UserController::node::readEachLine(string line)
//{
//	//cliext::vector<System::String^> vec;
//
//	std::vector <std::string>eachLineData;
//	std::istringstream ss(line);
//	string token;
//
//	while (std::getline(ss,token,',')) {
//		eachLineData.push_back(token);
//	}
//	/*return vec;*/
//	// TODO: insert return statement here
//	return eachLineData;
//}
//

//still unsure if I need this or not
//Team16UserController::page3::page3(System::String ^ dtime, System::String ^ dGps, System::String ^ dSpeed, System::String ^ dAltitude)
//{
//	/*time = dtime;
//	gps = dGps;
//	speed = dSpeed;
//	altitude = dAltitude;*/
//}

//Team16UserController::page3::page3() {

//void Team16UserController::readFromFile(System::String ^ filename, cliext::vector<Team16UserController::node^>v)
//{
//
//	StreamReader^ inputFile = File::OpenText(filename);
//	Console::WriteLine("trying to open file {0}...", filename);
//
//	String^ line;
//	int count = 0;
//	line = inputFile->ReadLine();
//
//	//Button
//	//while ((line = inputFile->ReadLine())!=nullptr)
//	//{
//	//	Team16UserController::node^ node = gcnew Team16UserController::node("fgh","wer","sdfg","asd");
//	//	
//	//}
//
//}
//
//cli::array<System::String^>^ Team16UserController::page3::readEachLine(System::String^ line)
//{
//	//cliext::vector<System::String^>vec;
//	cli::array<String^>^ strarray = gcnew cli::array<String^>(4);
//
//	return strarray;
//}



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
//

//void Team16UserController::page3::readfromfile(System::String ^ filename, cliext::vector<Team16UserController::node^> v)
//{
//	throw gcnew System::NotImplementedException();
//}
