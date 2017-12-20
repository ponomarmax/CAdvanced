// 3.1.2.2 for_each - part II.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//<problem chapter="2" section="2" slide="7" problem="1" title="Set - iterators">
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//your code
struct Print {
	void operator()(const int &value) {
		cout << value*value << " ";
	}
};
int main()
{
	vector<int>v1 = { 3, 5, 6, 8, 9 };
	//your code
	for_each(v1.begin(), v1.end(), Print());
	cout << endl;
	for_each(v1.rbegin(), v1.rend(), Print());
	cout << endl;

	return 0;
}

