// 3.1.3.1 Find operations.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;


int main()
{
	map<string, string> capitals = {
		{ "China", "Beijing" },
		{ "India", "New Delhi" },
		{ "Japan", "Tokyo" },
		{ "Philippines", "Manila" },
		{ "Russia", "Moscow" },
		{ "Egypt", "Cairo" },
		{ "Indonesia", "Jakarta" },
		{ "Democratic Republic of the Congo", "Kinshasa" },
		{ "South Korea", "Seoul" },
		{ "Bangladesh", "Dhaka" }
	};
	string s;
	cout << "Input country" << endl;
	getline(cin, s);

	//your code
	map<string, string>::iterator c = capitals.find(s);
	if (c != capitals.end()) {
		cout << "The capital of "<<(*c).first<<" is "<< (*c).second<<"."<<endl;
	}
	else {
		cout << "No such country on the list"<<endl;
	}
	return 0;
}

