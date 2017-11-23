// 2.3.14.1 Maps - operations.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	map<string, int> results = { { "Sarah", 15 },{ "John", 12 },{ "Bart", 17 } };

	for (auto hum : results) {
		cout << hum.first << " result is : " << hum.second<<endl;
	}
	cout << endl;
	results.erase("Bart");
	for (auto hum : results) {
		cout << hum.first << " result is : " << hum.second << endl;
	}
	cout << endl;
	results.insert({ "Bart",16 });
	for (auto hum : results) {
		cout << hum.first << " result is : " << hum.second << endl;
	}
	return 0;
}
