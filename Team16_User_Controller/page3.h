

#pragma once
#include<vector>
#include"page3_node.h"
#include <cliext\vector>
#include <string>
#include "page4.h"
//#include "opencv2\opencv.hpp"
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
		cliext::vector<Team16UserController::node^>dData;
		page3(cliext::vector<Team16UserController::node^>dData)
		{
			dData = dData;
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

	private: 
		System::Windows::Forms::Button^ newButton;
		
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::ComboBox^  HeatSignatures;
	private: System::Windows::Forms::Button^  displayBtn;

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
			this->HeatSignatures = (gcnew System::Windows::Forms::ComboBox());
			this->displayBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(872, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"List of Heat Signatures";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &page3::label1_Click);
			// 
			// HeatSignatures
			// 
			this->HeatSignatures->FormattingEnabled = true;
			this->HeatSignatures->Location = System::Drawing::Point(296, 110);
			this->HeatSignatures->Name = L"HeatSignatures";
			this->HeatSignatures->Size = System::Drawing::Size(304, 33);
			this->HeatSignatures->TabIndex = 2;
			this->HeatSignatures->SelectedIndexChanged += gcnew System::EventHandler(this, &page3::HeatSignatures_SelectedIndexChanged);
			// 
			// displayBtn
			// 
			this->displayBtn->Location = System::Drawing::Point(382, 211);
			this->displayBtn->Name = L"displayBtn";
			this->displayBtn->Size = System::Drawing::Size(134, 45);
			this->displayBtn->TabIndex = 3;
			this->displayBtn->Text = L"Display";
			this->displayBtn->UseVisualStyleBackColor = true;
			this->displayBtn->Click += gcnew System::EventHandler(this, &page3::displayBtn_Click);
			// 
			// page3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(872, 642);
			this->Controls->Add(this->displayBtn);
			this->Controls->Add(this->HeatSignatures);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"page3";
			this->Text = L"page3";
			this->ResumeLayout(false);

			displayData();
		}
#pragma endregion	 		
	public:
		System::Void displayData(); 
		//System::Void newButton_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		/*this->Hide();
		page4^ obj4 = gcnew page4(dData, 0);
		obj4->ShowDialog();
		this->Close();*/
	}
private: System::Void HeatSignatures_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void displayBtn_Click(System::Object^  sender, System::EventArgs^  e);
};
}
	
	
	