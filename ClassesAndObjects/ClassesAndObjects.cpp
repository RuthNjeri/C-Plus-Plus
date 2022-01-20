// ClassesAndObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "status.h"
#include "Tweeter.h"
#include <iostream>
using std::string; 

int main()
{
	Person p1("Ruth", "Waiganjo", 111);
	{ 
		Tweeter t1("Someone", "Else", 456, "@whoever");
		string name2 = t1.getName();

		// Establishes some scope
		Person p2;
	} // Out of scope

	std::cout << "after innermost block" << std::endl;

	string name = p1.getName();

	//int i = p1.arbitrarynumber; // Due to encapsulation (data members are private) this will raise an error

	Status s = Pending;
	s = Approved;

	FileError fe = FileError::notfound;
	fe = FileError::ok;
	NetworkError ne = NetworkError::disconnected;
	ne = NetworkError::ok;

	return 0;
}
