// 1.2.17.1 Deque - application.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <deque>

using namespace std;

enum CommandType
{
	MoveLeft,
	MoveRight,
	MoveForward,
	MoveBackward
};

//your code
class RoboCommander {
	deque<CommandType> de;
public:
	RoboCommander(){}
	void AddCommand(CommandType q) {
		de.push_back(q);
	}
	void UndoCommand() {
		if(!de.empty())
		de.pop_back();
	}
	void Execute() {
		deque<CommandType> ::iterator i;
		for (i = de.begin(); i != de.end(); i++) {
			if (*i == 0)
				cout << "MoveLeft" << endl;
			if (*i == 1)
				cout << "MoveRight" << endl;
			if (*i == 2)
				cout << "MoveForward" << endl;
			if (*i == 3)
				cout << "MoveBackward" << endl;
		}
		cout << "Ready" << endl;

	}
	
};

int main()
{
	RoboCommander commander;
	commander.AddCommand(MoveLeft);
	commander.AddCommand(MoveRight);
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.AddCommand(MoveLeft);
	commander.AddCommand(MoveForward);
	commander.AddCommand(MoveLeft);
	commander.AddCommand(MoveForward);
	commander.AddCommand(MoveRight);
	commander.AddCommand(MoveBackward);
	commander.Execute();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.AddCommand(MoveForward);
	commander.Execute();
	return 0;
}