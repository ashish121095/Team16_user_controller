#include "page4.h"

System::Void Team16UserController::page4::displayIndividualData(cliext::vector<Team16UserController::node^>dData,int value)
{	
	array<String^>^lines = { "Gps: "+dData[value]->gps + " \n Altitude: " + dData[value]->altitude + "\n Speed: "+
		dData[value]->speed + "\n Time: "+ dData[value]->time + "\n" };
	
	textBox1->Lines = lines;
	Controls->Add(textBox1);
	/*textBox1->Text = dData[5]->gps+"\n";
	textBox1->Text = dData[5]->altitude+"\n";
	textBox1->Text = dData[5]->speed + "\n";
	textBox1->Text = dData[5]->time + "\n";*/
}

