// 2.2.13.1 Sets - counting and searching.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <set>
#include <functional>

using namespace std;

//your code
void print(set <double, greater<double>> a, double q) {
	if (a.count(q) == 0)
		cout << "Not found";
	else
	{
		for (auto i = a.lower_bound(q); i != a.end(); i++)
			cout << *i << " ";
	}
}
int main() {

	set <double, greater<double>> valuesA = { -1.1, 2.9, -2.3, 2.71 };
	set <double, greater<double>> valuesB = { -3.14, 2.71, -3.88, 2.19 };
	double value;
	cin >> value;
	print(valuesA, value);
	print(valuesB, value);
	//your code

	return 0;
}
