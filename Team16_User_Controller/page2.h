#pragma once
#include"page3_node.h"
#include <cliext\vector>
#include "page3.h"
namespace Team16UserController {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for page2
	/// </summary>
	public ref class page2 : public System::Windows::Forms::Form
	{
	public:
		page2(void)
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
		~page2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Next3;
	private: System::Windows::Forms::Label^  Instruction2;
	private: System::Windows::Forms::Label^  VideoLabel;
	private: System::Windows::Forms::Label^  GPSLabel;
	private: System::Windows::Forms::TextBox^  VideoInput;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;



	protected:

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
			this->Next3 = (gcnew System::Windows::Forms::Button());
			this->Instruction2 = (gcnew System::Windows::Forms::Label());
			this->VideoLabel = (gcnew System::Windows::Forms::Label());
			this->GPSLabel = (gcnew System::Windows::Forms::Label());
			this->VideoInput = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// Next3
			// 
			this->Next3->Location = System::Drawing::Point(487, 248);
			this->Next3->Name = L"Next3";
			this->Next3->Size = System::Drawing::Size(106, 35);
			this->Next3->TabIndex = 9;
			this->Next3->Text = L"Next Page";
			this->Next3->UseVisualStyleBackColor = true;
			this->Next3->Click += gcnew System::EventHandler(this, &page2::Save_Click);
			// 
			// Instruction2
			// 
			this->Instruction2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Instruction2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Instruction2->Location = System::Drawing::Point(47, 18);
			this->Instruction2->Name = L"Instruction2";
			this->Instruction2->Size = System::Drawing::Size(499, 36);
			this->Instruction2->TabIndex = 10;
			this->Instruction2->Text = L"Instruction: input GPS and video file locations";
			// 
			// VideoLabel
			// 
			this->VideoLabel->AutoSize = true;
			this->VideoLabel->Location = System::Drawing::Point(71, 89);
			this->VideoLabel->Name = L"VideoLabel";
			this->VideoLabel->Size = System::Drawing::Size(146, 17);
			this->VideoLabel->TabIndex = 11;
			this->VideoLabel->Text = L"Video Folder Location";
			// 
			// GPSLabel
			// 
			this->GPSLabel->AutoSize = true;
			this->GPSLabel->Location = System::Drawing::Point(71, 151);
			this->GPSLabel->Name = L"GPSLabel";
			this->GPSLabel->Size = System::Drawing::Size(121, 17);
			this->GPSLabel->TabIndex = 12;
			this->GPSLabel->Text = L"GPS File Location";
			// 
			// VideoInput
			// 
			this->VideoInput->Location = System::Drawing::Point(229, 90);
			this->VideoInput->Name = L"VideoInput";
			this->VideoInput->Size = System::Drawing::Size(282, 22);
			this->VideoInput->TabIndex = 13;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(229, 163);
			this->maskedTextBox1->Mask = L"*.txt";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(282, 22);
			this->maskedTextBox1->TabIndex = 14;
			// 
			// page2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(605, 295);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->VideoInput);
			this->Controls->Add(this->GPSLabel);
			this->Controls->Add(this->VideoLabel);
			this->Controls->Add(this->Instruction2);
			this->Controls->Add(this->Next3);
			this->Name = L"page2";
			this->Text = L"page2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Save_Click(System::Object^  sender, System::EventArgs^  e) {
		cliext::vector<Team16UserController::node^>dData;
		this->Hide();
		page3 ^obj3 = gcnew page3(dData);
		//obj3->Size= System::Drawing::Size(300, 300);
		obj3->ShowDialog();
		this->Close();
	}
};
}
