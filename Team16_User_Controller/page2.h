#pragma once

#include <vector>
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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  VideoLoc;
	private: System::Windows::Forms::TextBox^  GPSLoc;
	private: System::Windows::Forms::Button^  NextPage_2;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->VideoLoc = (gcnew System::Windows::Forms::TextBox());
			this->GPSLoc = (gcnew System::Windows::Forms::TextBox());
			this->NextPage_2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(398, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Instruction: Input Video and Text file ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Video Location";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"GPS Location";
			// 
			// VideoLoc
			// 
			this->VideoLoc->Location = System::Drawing::Point(143, 81);
			this->VideoLoc->Name = L"VideoLoc";
			this->VideoLoc->Size = System::Drawing::Size(386, 22);
			this->VideoLoc->TabIndex = 3;
			// 
			// GPSLoc
			// 
			this->GPSLoc->Location = System::Drawing::Point(143, 127);
			this->GPSLoc->Name = L"GPSLoc";
			this->GPSLoc->Size = System::Drawing::Size(386, 22);
			this->GPSLoc->TabIndex = 4;
			// 
			// NextPage_2
			// 
			this->NextPage_2->Location = System::Drawing::Point(423, 264);
			this->NextPage_2->Name = L"NextPage_2";
			this->NextPage_2->Size = System::Drawing::Size(106, 35);
			this->NextPage_2->TabIndex = 5;
			this->NextPage_2->Text = L"Next Page";
			this->NextPage_2->UseVisualStyleBackColor = true;
			this->NextPage_2->Click += gcnew System::EventHandler(this, &page2::NextPage_2_Click);
			// 
			// page2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(541, 311);
			this->Controls->Add(this->NextPage_2);
			this->Controls->Add(this->GPSLoc);
			this->Controls->Add(this->VideoLoc);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"page2";
			this->Text = L"page2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void NextPage_2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	page3 ^obj3 = gcnew page3();
	obj3->ShowDialog();
}
};
}
