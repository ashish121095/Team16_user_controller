

#pragma once
#include<vector>
#include"page3_node.h"
#include <cliext\vector>
#include <string>
#include "page4.h"
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

	public:

	public:

	public:
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
			// page3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(872, 642);
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
		System::Void newButton_click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
	
	
	