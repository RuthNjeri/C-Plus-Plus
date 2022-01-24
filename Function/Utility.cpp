#include <iostream>
using std::cout;
using std::endl;

#include "Utility.h"

bool IsPrime(int x)
{
	bool prime = true;
	for (int i = 2; i <= x / i; i = i + 1)
	{
		int factor = x / i;
		if (factor * i == x)
		{
			cout << "factor found: " << factor << endl;
			prime = false;
			break;
		}
	}
	return prime;
}

bool Is2MorePrime(int const& x) {
	return IsPrime(x + 2);
}

//int& BadFunction() // Returns a dangling reference
//{
//	int a = 3;
//	return a;
//}// calling code would have a reference to a which is already out of a