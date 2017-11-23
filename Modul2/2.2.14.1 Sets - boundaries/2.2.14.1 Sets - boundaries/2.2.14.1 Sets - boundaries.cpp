// 2.2.14.1 Sets - boundaries.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <set>

using namespace std;

//your code

int main() {

	multiset <double> valuesA = { 1.1, 2.3, 2.7, 2.9, 3.5 };
	multiset <double> valuesB = { 2.5, 2.7, 3.14, 3.5, 3.5, 4.5 };
	double start_value, stop_value;
	cin >> start_value;
	cin >> stop_value;
	double sum2;
	double sum1 = sum2 = 0;
	for (auto i = valuesA.lower_bound(start_value); i != valuesA.upper_bound(stop_value) && i!=valuesA.end(); i++)
	{
		sum1 += *i;
	}
	for (auto i = valuesB.lower_bound(start_value); i != valuesB.upper_bound(stop_value) && i != valuesB.end(); i++)
	{
		sum2 += *i;
	}
	if (sum1 == 0)
		cout << "Not found ";
	else
		cout << sum1 << " ";
	if(sum2==0)
		cout << "Not found ";
	else
		cout<< sum2 << endl;;
	//your code

	return 0;
}