// 3.1.5.1 Searching operations.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//your_code
struct Print {
	void operator()(const int value) {
		cout << value << " ";
	}
};
void qw(vector<int> as, vector<int> values, vector<int> pattern1) {
	
	auto found = search(as.begin(), as.end(), pattern1.begin(), pattern1.end());
	while (found != as.end()) {
		auto q = distance(as.begin(), found);
		cout << "Pattern found, values at " << q << ": ";
		for_each(values.begin() + q, values.begin() + q + 4, Print());
		cout << endl;
		found = search(found + 3, as.end(), pattern1.begin(), pattern1.end());
	}
}
int main()
{
	vector<int> values = { 1, 1, 5, 3, 4, 4, 3, 2, 2, 4, 4, 5, 3, 8, 8, 1 };
	vector<int> as;
	for (size_t i = 0; i < values.size()-1; i++)
	{
		if (values[i + 1] > values[i])
			as.insert(as.end(), 1);
		else if(values[i + 1] == values[i])
			as.insert(as.end(), 0);
		else
			as.insert(as.end(), -1);
	}

	//your_code
	vector<int>pattern1 = { 0, 1, -1 };
	vector<int>pattern2 = { -1, 1, 0 };
	qw(as, values, pattern1);
	qw(as, values, pattern2);
	return 0;
}