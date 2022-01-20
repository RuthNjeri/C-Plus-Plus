#include "Tweeter.h"
#include <iostream>
using std::string;
using std::cout;
using std::endl;

Tweeter::Tweeter(string first,
	string last,
	int arbitrary,
	std::string handle)
	:
	Person(first, last, arbitrary),
	twitterhandle(handle)
{
	cout << "constructing tweeter" <<
		twitterhandle << std::endl;
}

Tweeter::~Tweeter()
{
	cout << "destructing tweeter" <<
		twitterhandle << std::endl;
}