// 2.2.7.1 Sets - iterators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> s1;
	set<int> s2;
	unsigned start_value;
	cin >> start_value;
	unsigned stop_value;
	cin >> stop_value;

	//your code
	
	for (size_t i = start_value; i < stop_value+1; i += 2)
	{
		s1.insert(s1.end(), i);
		s2.insert(s2.end(), i);
	}

	for (size_t i = start_value; i < stop_value; i += 2)
	{
		s1.insert(s1.end(), i + 1);
		s2.insert(s2.end(), i + 1);
	}
	

	for (set<int>::iterator i = s1.begin(); i != s1.end(); i++)
	{
		for (set<int>::iterator j = s2.begin(); j != s2.end(); j++)
		{
			cout << *i + *j << " ";
		}
	}
	for (auto i = s1.rbegin(), j=s2.rbegin(); i != s1.rend(); j++, i++)
	{
		
			cout << *i + *j << " ";
		
	}
	cout << endl;
	return 0;
}

