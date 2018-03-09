#include "page3.h"
#include <vector>
#include <string>

using namespace std;
//still unsure if I need this or not
Team16UserController::page3::page3(System::String ^ dtime, System::String ^ dGps, System::String ^ dSpeed, System::String ^ dAltitude)
{
	/*time = dtime;
	gps = dGps;
	speed = dSpeed;
	altitude = dAltitude;*/
}

//function to read data from a file
void Team16UserController::page3::readFromFile(System::String ^ filename)
{

}
//
//list::list() {
//	node* next = NULL;
//}
//
//void list::addData(string dTime, string dGps, string dSpeed, string dAltitude) {
//	
//	node *newNode = new node;
//	newNode->time = dTime;
//	newNode->gps = dGps;
//	newNode->speed= dSpeed;
//	newNode->altitude= dAltitude;
//	newNode->next= NULL;
//
//}
//
Team16UserController::node::node(void) {
	gps = nullptr;
	speed = nullptr;
	time = nullptr;
	altitude = nullptr;
	next->next = nullptr;
}
Team16UserController::node::node(System::String ^ dtime, System::String ^ dGps, System::String ^ dSpeed, System::String ^ dAltitude) {
	gps = dGps;
	time = dtime;
	speed = dSpeed;;
	altitude = dAltitude;
}

Team16UserController::node::~node()
{
	throw gcnew System::NotImplementedException();
}



//add data of drone
//void Team16UserController::node::addData(System::String ^ dtime, System::String ^ dGps, System::String ^ dSpeed, System::String ^ dAltitude)
//{
//	droneData
//
//
//
//}
