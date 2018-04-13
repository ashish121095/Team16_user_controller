#include "Bmp to Jpeg.h"

System::Void Team16UserController::BmptoJpeg::convertBmptoJpeg()
{
	for (int i = 1; i <= 13; i++) {
		Mat Img;
		Image^ img = Image::FromFile("C:\\Users\\ashish\\Desktop\\bmpfiles\\img1.BMP");
		img->Save("img1.jpg", ImageFormat::Jpeg);
		imwrite("C:\\Users\\ashish\\Desktop\\bmpfiles\\",Img+i);
	}

	/*for (int i = 1; i <= 13; i++) {
		Mat JpegImg = imread("");
	}*/
	/*Graphics^ g = img->Graphics;
	Image^ image = Image::FromFile("SampleImage.jpg");
	Form::ClientSize = image->Size;
	g->DrawImage(image, 0, 0, image->Size.Width, image->Size.Height);
	*/
	/*
	string temp = "Camera0/seq";
	string temp2;
	Mat img;

	for (i = 1; i<350; i++) {

		if (i<10) { temp2 = temp + "0" + i + ".jpg";   img = imread(temp2.c_str(), CV_LOAD_IMAGE_COLOR); process(img); }

		else { temp2 = temp + i + ".jpg"; img = imread(temp2.c_str(), CV_LOAD_IMAGE_COLOR); process(img); }
	}*/
}
