

#pragma once
//#include "page1.h"
#include<vector>
#include"page3_node.h"
#include <cliext\vector>
#include <string>

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
	private: 
		//System::Windows::Forms::Button^  button1;
		System::Windows::Forms::Button^ newButton;

	public:
		cliext::vector<Team16UserController::node^>dData;
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
			//this->button1 = (gcnew System::Windows::Forms::Button());
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
			//this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"page3";
			this->Text = L"page3";
			this->ResumeLayout(false);
			this->PerformLayout();

			
			displayData(dData);
		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
			 		
	public:System::Void displayData(cliext::vector<Team16UserController::node^>dData);

	};
}
	
	
	