#pragma once
#include <cliext\vector>
#include<vector>
#using <System.dll>
#include <string>
#include<array>

using namespace System::IO;
using namespace std;

namespace Team16UserController {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	//using namespace System::Array;


	/// <summary>
	/// Summary for page3
	/// </summary>

	public ref class node:System::Collections::Generic::LinkedList<String^> {
		
	public:
		//vector<LinkedList<String^>> val = new vector<int>;
		//vector<LinkedList<String^>> val;
		String ^ gps;
		String^ time;
		String^ altitude;
		String^ speed;
		node^ next;
		node(void);
		node(System::String ^, System::String ^, System::String ^, System::String ^);
		~node();



		//LinkedList <String^> droneData = gcnew LinkedList<String^>(gps,time,altitude,speed);
		//void addData(String^, String^, String^, String^);
		
	};
	public ref class page3 : public System::Windows::Forms::Form
	{
	public:
		
		page3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		//overload constructor
		//page3(System::String ^, System::String ^, System::String ^, System::String ^);
		/*page3() {

		}*/
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~page3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::Label^  label1;
		
		//drone data to be displayed
		/*System::String^ time;
		System::String^ gps;
		System::String^ speed;
		System::String^ altitude;*/


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(165, 40);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(5);
			this->label1->Size = System::Drawing::Size(162, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"List of Heat Signatures";
			this->label1->Click += gcnew System::EventHandler(this, &page3::label1_Click);
			// 
			// page3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(522, 327);
			this->Controls->Add(this->label1);
			this->Name = L"page3";
			this->Text = L"page3";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	

			 void readFromFile(System::String^ , cliext::vector<Team16UserController::node^>v);

			 //cliext::vector<System::String^> readline(System::String^);

			 cli::array<System::String^>^ readEachLine(System::String^);
	};
}
