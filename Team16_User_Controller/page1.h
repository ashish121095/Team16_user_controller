#pragma once

#include <vector>

namespace Team16UserController {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	 
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
			this->SuspendLayout();
			// 
			// Instruction
			// 
			this->Instruction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Instruction->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Instruction->Location = System::Drawing::Point(83, 35);
			this->Instruction->Name = L"Instruction";
			this->Instruction->Size = System::Drawing::Size(599, 64);
			this->Instruction->TabIndex = 0;
			this->Instruction->Text = L"Instruction: Please enter the Search GPS coordinates in the input boxes provided."
				L" ";
			this->Instruction->Click += gcnew System::EventHandler(this, &page1::label1_Click_1);
			// 
			// page1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(746, 403);
			this->Controls->Add(this->Instruction);
			this->Name = L"page1";
			this->Text = L"Heat Signatures";
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {

		
	}
	};
}
