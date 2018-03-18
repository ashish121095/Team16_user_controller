#include "page3.h"
#include <string>
#include <iostream>
#include <fstream>
#include <strstream>
#include<sstream>

#define ARRAY_SIZE 4;
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
//Team16UserController::node::node(System::String ^ dtime, System::String ^ dGps, System::String ^ dSpeed, System::String ^ dAltitude) {
//	gps = dGps;
//	time = dtime;
//	speed = dSpeed;;
//	altitude = dAltitude;
//}

Team16UserController::node::~node()
{
	gps = nullptr;
	speed = nullptr;
	time = nullptr;
	altitude = nullptr;
}
 

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

System::Void Team16UserController::page3::displayData() {

	dData = Team16UserController::node::readFromFile("tempData.txt", dData);
	int width = 138;
	int height = 55;
	int x = 189;
	int y = 134;
	for (int i = 0; i < dData.size(); i++) {

		this->newButton = (gcnew System::Windows::Forms::Button());

		this->newButton->Location = System::Drawing::Point(x, y);
		this->newButton->Name = L"button" + (++i);
		this->newButton->Size = System::Drawing::Size(width, height);
		this->newButton->TabIndex = 1;
		this->newButton->Text = L"Heat Signature " + i;
		this->newButton->UseVisualStyleBackColor = true;
		i--;
		//System::Console::Write(btns);
		btns[i] = newButton;

		y = y + height + 10;
	}

	for (int j = 0; j < btns->Length;j++) {
		this->Controls->Add(btns[j]);
		
	}

}
System::Void Team16UserController::page3::newButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	for (int i = 0; i < btns->Length; i++) {

		if (btns[i]->Text == "Heat Signature "+(i+1)) {
			this->Hide();
			page4^ obj4 = gcnew page4(dData, i);
			obj4->ShowDialog();
			this->Close();
		}
	}

}

