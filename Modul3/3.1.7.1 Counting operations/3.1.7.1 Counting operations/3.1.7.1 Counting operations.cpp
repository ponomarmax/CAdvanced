// 3.1.7.1 Counting operations.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int amount(vector<double> values, unsigned start_value, unsigned stop_value)
{
	return count_if(values.begin(), values.end(),
		[start_value, stop_value](const double& elem) { return elem >= start_value && elem <= stop_value; });
}

int main()
{
	vector<double> values =
	{ 2.1, 3.14, 2.2, 1.1, 2.11, 3.2, 3.6, 2.5, 2.6, 4.11, 4.12, 3.11, 3.73, 4.83 };
	unsigned start_value;
	cin >> start_value;
	unsigned stop_value;
	cin >> stop_value;

	cout << amount(values, start_value, stop_value);

	return 0;
}


