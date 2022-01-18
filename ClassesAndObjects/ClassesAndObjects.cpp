// ClassesAndObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Person.h"
#include <iostream>

int main()
{
	Person p1("Ruth", "Waiganjo", 111);
	{ // Establishes some scope
		Person p2;
	} // Out of scope

	std::cout << "after innermost block" << std::endl;

	std::string name = p1.getName();

	//int i = p1.arbitrarynumber; // Due to encapsulation (data members are private) this will raise an error
	return 0;
}
