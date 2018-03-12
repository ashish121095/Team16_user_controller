#pragma once
#include <cliext\vector>
#include <string>
#include<array>

namespace Team16UserController {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	public ref class node :System::Collections::Generic::LinkedList<String^> {

	public:
		
		String ^ gps;
		String^ time;
		String^ altitude;
		String^ speed;
		node^ next;
		node(void);
		node(System::String ^, System::String ^, System::String ^, System::String ^);
		~node();
		cliext::vector<node^>v;

		void readFromFile(std::string filename, cliext::vector<node^>v);

	};
}