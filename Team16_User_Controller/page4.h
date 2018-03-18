#pragma once
#include <cliext\vector>
#include "page3_node.h"
namespace Team16UserController {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for page4
	/// </summary>
	public ref class page4 : public System::Windows::Forms::Form
	{
	public:
		cliext::vector<Team16UserController::node^>droneData;
		int pos = 0;
		page4(cliext::vector<Team16UserController::node^>dData, int val)
		{
			droneData = dData;
			pos=val;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~page4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
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
		void InitializeComponent()
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(119, 59);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"displayBox";
			this->textBox1->Size = System::Drawing::Size(284, 119);
			this->textBox1->TabIndex = 0;
			// 
			// page4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(507, 314);
			this->Controls->Add(this->textBox1);
			this->Name = L"page4";
			this->Text = L"page4";
			this->ResumeLayout(false);
			this->PerformLayout();

			displayIndividualData(droneData,pos);
		}
#pragma endregion
	public:
		System::Void displayIndividualData(cliext::vector<Team16UserController::node^>dData,int);

	};
}
