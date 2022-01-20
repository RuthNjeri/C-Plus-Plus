#pragma once
#include <string>

class Person
{
private:
	std::string firstname;
	std::string lastname;
	int arbitrarynumber;

public:
	Person(std::string first, std::string last, int arbitrary);
	Person();
	~Person(); // Real destructors are used to free up resources
	std::string getName();
};

