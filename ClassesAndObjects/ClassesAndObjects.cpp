// ClassesAndObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Person.h"

int main()
{
	Person p1;
	Person p2;
	std::string name = p1.getName();

	//int i = p1.arbitrarynumber; // Due to encapsulation (data members are private) this will raise an error
	return 0;
}