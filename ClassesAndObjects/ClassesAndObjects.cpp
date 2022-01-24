// ClassesAndObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "person.h"
#include "status.h"
#include "Tweeter.h"
#include <iostream>
using std::string; 
using std::cout;
using std::endl;

int main()
{
	Person p1("Ruth", "Waiganjo", 111);
	{ 
		Tweeter t1("Someone", "Else", 456, "@whoever");

		// Establishes some scope
		Person p2;
	} // Out of scope

	std::cout << "after innermost block" << std::endl;
	cout << "p1: " << p1.GetName() << " " << p1.GetNumber() << endl;
	p1.SetNumber(124);
	cout << "p1: " << p1.GetName() << " " << p1.GetNumber() << endl;

	string name = p1.GetName();

	//int i = p1.arbitrarynumber; // Due to encapsulation (data members are private) this will raise an error

	Status s = Pending;
	s = Approved;

	FileError fe = FileError::notfound;
	fe = FileError::ok;
	NetworkError ne = NetworkError::disconnected;
	ne = NetworkError::ok;

	return 0;
}
