#include <iostream>
//#include <clocale>
#include "Person.h"

Person::Person(std::string _name, Date _birth, Date _death) {
	name = _name;
	birth = _birth;
	death = _death;
}

void Person::SetName(std::string _name) { /*setlocale(LC_ALL, "Russian");*/ name = _name; }

void Person::SetBirthdate(Date _birth) { birth = _birth; }

void Person::SetDeathdate(Date _death) { death = _death; }

std::string Person::GetName() { 
	//setlocale(LC_ALL, "Russian");
	return name; 
}

std::string Person::GetInfo() { 
	//setlocale(LC_ALL, "Russian");
	std::string res;
	std::string birth_out = birth.GetDate();
	std::string death_out;
	if (death.GetDate() == "00.00.0") {
		death_out = "None";
	} else death_out = death.GetDate();

	//return "--ИНФОРМАЦИЯ--\nИмя: " + name + ".\nДата рождения: " + birth_out + "./nДата смерти: " + death_out + ".";
	return "--INFORMATION--\nName: " + name + ".\nBirthdate: " + birth_out + ".\nDeathdate: " + death_out + ".";
}