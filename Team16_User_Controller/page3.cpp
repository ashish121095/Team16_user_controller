#include "page3.h"
#include <string>
#include <iostream>
#include <fstream>
#include <strstream>
#include<sstream>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace std;


Team16UserController::node::node() {
	gps = nullptr;
	speed = nullptr;
	time = nullptr;
	altitude = nullptr;
}

Team16UserController::node::~node()
{
}
 /*Reads data from a file into nodes of vector
 Sources
 -https://msdn.microsoft.com/en-us/library/bb386284.aspx
 */

cliext::vector<Team16UserController::node^> Team16UserController::node::readFromFile(std::string filename, cliext::vector<node^> v)
{
	std::string data;
	cliext::vector<System::String^> eachLineData;
	ifstream inFile(filename);
	while (getline(inFile, data)) {
		node^ n = gcnew node();
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
		eachLineData.clear();

	}
	return v;
}
/*Display Data based on user selection*/
System::Void Team16UserController::page3::displayData() {

	dData = Team16UserController::node::readFromFile("tempData.txt", dData);
	for (int i = 0; i < dData.size(); i++) {
		
		this->HeatSignatures->Items->Add("Heat Signature "+(i+1));
	}
}
System::Void Team16UserController::page3::displayBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	this->Hide();
	page4^ obj4 = gcnew page4(dData, HeatSignatures->Text);
	obj4->ShowDialog();
	this->Close();


}

