#include "page1.h"
#include "page3.h"
#include <cliext\vector>
//#using <System.dll>
using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace std;
[STAThreadAttribute]
int main(cli::array < System::String^ > ^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Team16UserController::page1 form;
	Application::Run(%form);
	
	return 0;
}

/*Determine the range of search coordinates */
System::Void Team16UserController::page1::SearchCN_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
{
}

System::Double Team16UserController::page1::calculateRange()
{
	double timeLimit;
	double longi1, longi2, lat1, lat2;

	Double::TryParse(StartCN->Text, longi1);
	Double::TryParse(StartCW->Text, lat1);
	Double::TryParse(SearchCN->Text, longi2);
	Double::TryParse(SearchCW->Text, lat2);

	longi1 = degreesToRadians(longi1);
	lat1 = degreesToRadians(lat1);
	longi2 = degreesToRadians(longi2);
	lat2 = degreesToRadians(lat2);

	double longitude = longi1 - longi2;
	double latitude = lat1 - lat2;

	double distance = calculateDist(latitude,lat1,lat2,longitude);
	timeLimit = calculateTime(distance);
	return timeLimit;
}


/*calculate distance between to coordinates using Haversine formula */
System::Double Team16UserController::page1::calculateDist(double dLat, double dlat1, double dlat2, double dLong)
{
	double aHarv = pow(sin(dLat / 2.0), 2.0) + cos(dlat1)*cos(dlat2)*pow(sin(dLong / 2), 2);
	double cHarv = 2 * atan2(sqrt(aHarv), sqrt(1.0 - aHarv));
	return cHarv * earthRadKm;
	/*return 2.0 * earthRadKm * asin(sqrt(u * u + cos(startLat) * cos(searchLat) * v * v));*/

}

/*Convert degrees into radians for easeness*/
System::Double Team16UserController::page1::degreesToRadians(System::Double deg)
{
		return deg * (PI/180);
}

/*This function decide the flight time based on distance to see if drone is going to make it back or not.*/
System::Double Team16UserController::page1::calculateTime(System::Double distance)
{
	// need to implement this function
	
	Double minSpeed = 2.0; //meter per second
	Double time; //time in Minutes
	Double timeSec; // time in seconds

	timeSec = ((distance*1000) / minSpeed); // getting time in seconds
	time = timeSec / 60.0;  //converting into minutes

	return time;
}
