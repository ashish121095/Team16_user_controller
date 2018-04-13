#pragma once
#include "opencv\cv.h"
#include "opencv2\opencv.hpp"
namespace Team16UserController {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Imaging; // for ImageFormat class
	using namespace cv;


	/// <summary>
	/// Summary for BmptoJpeg
	/// </summary>
	public ref class BmptoJpeg : public System::Windows::Forms::Form
	{
	public:
		BmptoJpeg(void)
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
		~BmptoJpeg()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		PictureBox^ pictureBox1;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			pictureBox1 = gcnew PictureBox;
			this->components = gcnew System::ComponentModel::Container();
			this->Size = System::Drawing::Size(300,300);
			this->Text = L"BmptoJpeg";
			this->Padding = System::Windows::Forms::Padding(0);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &BmptoJpeg::OnPaint);
			this->Controls->Add(pictureBox1);

		}
#pragma endregion

		System::Void convertBmptoJpeg();
	public:
		System::Void BmptoJpeg::OnPaint(Object^,PaintEventArgs^ pe) override
		{
			convertBmptoJpeg();
			Graphics^ g = pe->Graphics;
			Image^ image = Image::FromFile("C:\\Users\\ashish\\Desktop\\bmpfiles\\img3.jpg");
			Form::ClientSize = image->Size;
			g->DrawImage(image, 10, 10, image->Size.Width, image->Size.Height);
		}
	};
}
