#pragma once
#include <cliext\vector>
#include <string>

namespace Team16UserController {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	/*
	node class to hold recieved gps, time, altitude and speed data from a micro SD card*/
	public ref class node {

	public:
		
		String ^ gps;
		String^ time;
		String^ altitude;
		String^ speed;
		node();
		~node();
		cliext::vector<node^>v;

		static cliext::vector<node^> readFromFile(std::string filename, cliext::vector<node^>v);
	};
}

