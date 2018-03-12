#pragma once

#include <vector>

#include "page3.h"
#include <fstream>
#include <string>
namespace Team16UserController {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	 
	/// <summary>
	/// Summary for page1
	/// </summary>
	public ref class page1 : public System::Windows::Forms::Form
	{
	public:
		page1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
		//	std::vector<String>HSigns;
			//
		}

	private:


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~page1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Instruction;
	private: System::Windows::Forms::Button^  NextPage;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  SearchCW;




	private: System::Windows::Forms::TextBox^  SearchCN;
	private: System::Windows::Forms::Button^  Save;
	private: System::Windows::Forms::Label^  StartCN;
	private: System::Windows::Forms::Label^  StartCW;


	private: System::Windows::Forms::Button^  Populate;









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
			this->Instruction = (gcnew System::Windows::Forms::Label());
			this->NextPage = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SearchCW = (gcnew System::Windows::Forms::TextBox());
			this->SearchCN = (gcnew System::Windows::Forms::TextBox());
			this->Save = (gcnew System::Windows::Forms::Button());
			this->StartCN = (gcnew System::Windows::Forms::Label());
			this->StartCW = (gcnew System::Windows::Forms::Label());
			this->Populate = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Instruction
			// 
			this->Instruction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Instruction->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Instruction->Location = System::Drawing::Point(12, 9);
			this->Instruction->Name = L"Instruction";
			this->Instruction->Size = System::Drawing::Size(599, 64);
			this->Instruction->TabIndex = 0;
			this->Instruction->Text = L"Instruction: Please enter the Search GPS coordinates in the input boxes provided "
				L"in Decimal Degree Format. ";
			// 
			// NextPage
			// 
			this->NextPage->Location = System::Drawing::Point(457, 207);
			this->NextPage->Name = L"NextPage";
			this->NextPage->Size = System::Drawing::Size(106, 35);
			this->NextPage->TabIndex = 1;
			this->NextPage->Text = L"Next Page";
			this->NextPage->UseVisualStyleBackColor = true;
			this->NextPage->Click += gcnew System::EventHandler(this, &page1::NextPage_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 177);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Search Coordinates";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Start Coordinates";
			// 
			// SearchCW
			// 
			this->SearchCW->Location = System::Drawing::Point(170, 200);
			this->SearchCW->Name = L"SearchCW";
			this->SearchCW->Size = System::Drawing::Size(100, 22);
			this->SearchCW->TabIndex = 7;
			this->SearchCW->Text = L"West";
			// 
			// SearchCN
			// 
			this->SearchCN->Location = System::Drawing::Point(170, 172);
			this->SearchCN->Name = L"SearchCN";
			this->SearchCN->Size = System::Drawing::Size(100, 22);
			this->SearchCN->TabIndex = 6;
			this->SearchCN->Text = L"North";
			// 
			// Save
			// 
			this->Save->Location = System::Drawing::Point(457, 166);
			this->Save->Name = L"Save";
			this->Save->Size = System::Drawing::Size(106, 35);
			this->Save->TabIndex = 8;
			this->Save->Text = L"Save Data";
			this->Save->UseVisualStyleBackColor = true;
			this->Save->Click += gcnew System::EventHandler(this, &page1::Save_Click);
			// 
			// StartCN
			// 
			this->StartCN->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->StartCN->Location = System::Drawing::Point(167, 98);
			this->StartCN->Name = L"StartCN";
			this->StartCN->Size = System::Drawing::Size(120, 19);
			this->StartCN->TabIndex = 9;
			// 
			// StartCW
			// 
			this->StartCW->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->StartCW->Location = System::Drawing::Point(167, 126);
			this->StartCW->Name = L"StartCW";
			this->StartCW->Size = System::Drawing::Size(120, 19);
			this->StartCW->TabIndex = 10;
			// 
			// Populate
			// 
			this->Populate->Location = System::Drawing::Point(457, 125);
			this->Populate->Name = L"Populate";
			this->Populate->Size = System::Drawing::Size(106, 35);
			this->Populate->TabIndex = 11;
			this->Populate->Text = L"Populate Start";
			this->Populate->UseVisualStyleBackColor = true;
			this->Populate->Click += gcnew System::EventHandler(this, &page1::Populate_Click);
			// 
			// page1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(609, 254);
			this->Controls->Add(this->Populate);
			this->Controls->Add(this->StartCW);
			this->Controls->Add(this->StartCN);
			this->Controls->Add(this->Save);
			this->Controls->Add(this->SearchCW);
			this->Controls->Add(this->SearchCN);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->NextPage);
			this->Controls->Add(this->Instruction);
			this->Name = L"page1";
			this->Text = L"Heat Signatures";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void NextPage_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		page3 ^obj3 = gcnew page3();
		obj3->ShowDialog();

	}

	private: System::Void Save_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	
	private: System::Void Populate_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string coord;
		int count = 0;
		ifstream inFile ("StartCoords.txt");
		if (inFile.is_open()) {
			while (getline(inFile, coord) && count <2)
			{
				if (count == 0)
				{
					StartCN->Text = gcnew String(coord.c_str());
				}
				else 
				{
					StartCW->Text = gcnew String(coord.c_str());
				}
				count++;
			}
			inFile.close();
		}

	}
};
	}
