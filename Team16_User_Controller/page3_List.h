#pragma once
#include <string>

using namespace std;
class list {

	struct node
	{
		string time;
		string gps;
		string altitude;
		string speed;
		node * next;
	};

	list();
	void addData(string, string, string, string);


};