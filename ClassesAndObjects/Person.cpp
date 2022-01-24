#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;
//using namespace std; can cause confusion, it is better to specify

Person::Person(std::string first, std::string last, int arbitrary)
	: firstname(first), lastname(last), arbitrarynumber(arbitrary)
{
	cout << "Constructing " <<
		firstname << " " << lastname << endl;
}

Person::Person() : arbitrarynumber(0)
{
	cout << "constructing " << GetName() << endl;
}

Person::~Person()
{
	cout << "destructing " << GetName() << endl;
}

string Person::GetName()const
{
	return firstname + " " + lastname;
}
