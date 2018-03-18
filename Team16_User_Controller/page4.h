#pragma once
#include <cliext\vector>
#include "page3_node.h"
#include"page3.h"
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
	private: System::Windows::Forms::Button^  backBtn;
	public:
		String ^ hsign;
		page4(cliext::vector<Team16UserController::node^>dData, String^ str)
		{
			droneData = dData;
			hsign = str;
			//pos=val;
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
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(119, 59);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(284, 119);
			this->textBox1->TabIndex = 0;
			// 
			// backBtn
			// 
			this->backBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backBtn->Location = System::Drawing::Point(172, 209);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(177, 49);
			this->backBtn->TabIndex = 1;
			this->backBtn->Text = L"back to previous page";
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &page4::backBtn_Click);
			// 
			// page4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(507, 314);
			this->Controls->Add(this->backBtn);
			this->Controls->Add(this->textBox1);
			this->Name = L"page4";
			this->Text = L"page4";
			this->ResumeLayout(false);
			this->PerformLayout();

			displayIndividualData(droneData);
		}
#pragma endregion
	public:
		System::Void displayIndividualData(cliext::vector<Team16UserController::node^>dData);

	private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e);
	};
}


