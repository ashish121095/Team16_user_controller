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
	Double u, v;
	Double dist;
	System::Double startNorthCo = System::Convert::ToDouble(StartCN->Text);
	System::Double startWestCo = System::Convert::ToDouble(StartCW->Text);
	System::Double searchNorthCo = System::Convert::ToDouble(SearchCN->Text);
	System::Double searchWestCo = System::Convert::ToDouble(SearchCW->Text);

	startNorthCo = degreesToRadians(startNorthCo);
	startWestCo = degreesToRadians(startWestCo);
	searchNorthCo = degreesToRadians(searchNorthCo);
	searchWestCo = degreesToRadians(searchWestCo);

	u = sin((searchWestCo - startWestCo) / 2);
	v = sin((searchNorthCo - startNorthCo) / 2);
	
	dist = calculateDist(startWestCo,searchWestCo,u,v);
}
/*calculate distance between to coordinates using Haversine formula */
System::Double Team16UserController::page1::calculateDist(System::Double startLat, System::Double searchLat, System::Double u, System::Double v)
{
	return 2.0 * earthRadKm * asin(sqrt(u * u + cos(startLat) * cos(searchLat) * v * v));

}

/*Convert degrees into radians for easeness*/
System::Double Team16UserController::page1::degreesToRadians(System::Double deg)
{
		return (deg* PI/180);
}

/*This function decide the flight time based on distance to see if drone is going to make it back or not.*/
System::Boolean Team16UserController::page1::calculateTime(System::Double distance)
{
	// need to implement this function
	return System::Boolean();
}




//double distanceEarth(double lat1d, double lon1d, double lat2d, double lon2d) {
//	double lat1r, lon1r, lat2r, lon2r, u, v;
//	lat1r = deg2rad(lat1d);
//	lon1r = deg2rad(lon1d);
//	lat2r = deg2rad(lat2d);
//	lon2r = deg2rad(lon2d);
//	u = sin((lat2r - lat1r) / 2);
//	v = sin((lon2r - lon1r) / 2);
//	return 2.0 * earthRadiusKm * asin(sqrt(u * u + cos(lat1r) * cos(lat2r) * v * v));
//}



