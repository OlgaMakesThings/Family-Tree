#pragma once
#include <string>
#include "Date.h"

class Person {
	std::string name;
	Date birth;
	Date death;
public:
	Person() { name = ""; }
	Person(std::string _name, Date _birth, Date _death);
	void SetName(std::string _name);
	void SetBirthdate(Date _birth);
	void SetDeathdate(Date _death);
	std::string GetName();
	std::string GetInfo();
};

