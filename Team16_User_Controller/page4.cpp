#include "page4.h"

System::Void Team16UserController::page4::displayIndividualData(cliext::vector<Team16UserController::node^>dData)
{	
	for (int k = 0; k < dData.size();k++) {
		
		if (hsign == "Heat Signature "+(k+1)) {

			cli::array<String^>^lines = { "Gps: " + dData[k]->gps + " \r \n Altitude: " + dData[k]->altitude + "\r \n Speed: " +
				dData[k]->speed + "\r \n Time: " + dData[k]->time + "\r \n" };

			textBox1->Lines = lines;
			Controls->Add(textBox1);
		}
	}
}

System::Void Team16UserController::page4::backBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	this->Hide();
	page3^ obj3 = gcnew page3(droneData);
	obj3->ShowDialog();
	this->Close();
}

System::Void Team16UserController::page4::exitBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	this->Close();
}

