// 2.3.6.1 Maps - iterators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include "list"

using namespace std;


int main()
{

	map<string, int> variables_map = { { "x", 0 },{ "y", 1 },{ "z", 2 },
	{ "xx", 3 },{ "xy", 4 },{ "xz", 5 } };
	vector<int> values = { 9, 6, 5, 7, 3, 2 };
	string variable_name;
	cin >> variable_name;

	//your code
	for (auto i = variables_map.begin(); i!=variables_map.end(); i++)
	{
		cout << "Variable: "<<(*i).first<<" at address: "<< (*i).second<<" has value: "<<values[(*i).second]<<" ";
	}
	if (variables_map.count(variable_name) == 0)
		cout << "Variable: " << variable_name << " doesn't exist.";
	else {
		auto q = variables_map.find(variable_name);
		cout << "Variable: " << (*q).first << " at address: " << (*q).second << " has value: " << values[(*q).second] << " ";

	}

	return 0;
}

