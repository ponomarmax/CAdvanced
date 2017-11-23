// 2.2.11.1 Sets - swapping.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <fstream>
#include <set>
#include <functional>

using namespace std;

int main() {

	set <double, greater<int>> valuesA = { -1.1, 2.9, -2.3, 3.7 };
	set <double, greater<int>> valuesB = { -3.14,-2.19,2.71 ,3.88 };

	valuesA.swap(valuesB);

	for (auto value : valuesA)
		cout << value << " ";
	cout << endl;
	for (auto value : valuesB)
		cout << value << " ";
	cout << endl;

	return 0;
}
