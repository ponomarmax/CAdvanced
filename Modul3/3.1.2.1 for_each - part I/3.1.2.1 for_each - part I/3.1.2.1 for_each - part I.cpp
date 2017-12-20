// 3.1.2.1 for_each - part I.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

void printPlusOne(int value)
{
	cout << value + 1 << " ";
}

struct PrintPlusOne
{
	void operator()(const int & value) //change argument to const int & value for set
	{
		cout << value+1 << " ";
	}
};

int main()
{

	set <int>s1 = { 3, 5 ,6 ,8 ,9 };

	cout << "Print all elements of the set - using the function\n";
	for_each(s1.begin(), s1.end(), printPlusOne);
	cout << endl;

	cout << "Print all elements of the set - using the function object\n";
	for_each(s1.begin(), s1.end(), PrintPlusOne());
	cout << endl;

	return 0;
}

