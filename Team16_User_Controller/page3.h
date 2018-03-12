

#pragma once
//#include "page1.h"
#include<vector>
#include"page3_node.h"
//#using <System.dll>
//#include "stdafx.h"

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
	
	
	public ref class page3 : public System::Windows::Forms::Form
	{
	public:
		//node n;
		page3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		
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

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^  button1;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
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

			this->button1->Location = System::Drawing::Point(312, 273);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"just checking";
			this->button1->UseVisualStyleBackColor = true;
			/*this->button1->Click += gcnew System::EventHandler(this, &page3::button1_Click);
			
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(746, 403);
			this->Controls->Add(this->button1);
			this->Name = L"page3";
			this->Text = L"List of Heat Signatures";
			this->ResumeLayout(false);*/
		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		/*this->Hide();
		page1 ^obj1 = gcnew page1();
		obj1->ShowDialog();
*/
	}



			 //////cliext::vector<System::String^> readline(System::String^);

			 //void readfromfile(System::String ^ filename, cliext::vector<Team16UserController::node^> v);

			 //cli::array<system::string^>^ readeachline(system::string^);
	};
	
	//}
	//inline void Team16UserController::page3::readFromFile(System::String^filename, cliext::vector<Team16UserController::node^>v)
	//{

	//	StreamReader^ inputFile = File::OpenText(filename);

	//	String^ line;
	//	int count = 0;
	//	line = inputFile->ReadLine();

	//	//Button
	//	//while ((line = inputFile->ReadLine())!=nullptr)
	//	//{
	//	//	Team16UserController::node^ node = gcnew Team16UserController::node("fgh","wer","sdfg","asd");
	//	//	
	//	//}

	//}

	//////cliext::vector<System::String^> readline(System::String^);

	//cli::array<System::String^>^ readEachLine(System::String^);
}










