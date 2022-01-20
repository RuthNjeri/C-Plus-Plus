#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;
//using namespace std; can cause confusion, it is better to specify

Person::Person(std::string first, std::string last, int arbitrary)
	: firstname(first), lastname(last), arbitrarynumber(arbitrary)
{
	cout << "Constructing " <<
		firstname << " " << lastname << endl;
}

Person::Person() : arbitrarynumber(0)
{
	cout << "constructing " << firstname << lastname << endl;
}

Person::~Person()
{
	cout << "destructing " << firstname << lastname << endl;
}

std::string Person::getName()
{
	return firstname + " " + lastname;
}
