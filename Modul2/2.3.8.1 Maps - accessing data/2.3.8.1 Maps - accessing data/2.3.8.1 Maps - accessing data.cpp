// 2.3.8.1 Maps - accessing data.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;


int main()
{
	map<char, int> building1 = { { 'a', 30 },{ 'b', 40 } };
	map<char, int> building2 = { { 'a', 50 },{ 'b', 25 },{ 'c', 11 } };
	map<char, int> building3 = { { 'a', 20 },{ 'b', 35 } };
	map<int, map<char, int>> buildings = {
		{ 1, building1 },
		{ 2, building2 },
		{ 3, building3 }
	};
	for (auto build : buildings)
	{
		for (auto i = build.second.begin();i!= build.second.end();i++)
		{
			cout << "Building number: " <<build.first
				<< " letter: " << (*i).first << " has: "
				<< (*i).second << " square meters." << endl;
		}
	}
	return 0;
}