#define CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
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
	return name; 
}

std::string Person::GetInfo() { 
	//setlocale(LC_ALL, "Russian");
	std::string res;
	std::string birth_out = birth.GetDate();
	std::string death_out = death.GetDate();

	//return "--ИНФОРМАЦИЯ--\nИмя: " + name + ".\nДата рождения: " + birth_out + "./nДата смерти: " + death_out + ".";
	if (death.GetDate() == "00.00.0") {
		return "--INFORMATION--\nName: " + name + ".\nBirthdate: " + birth_out + ".";
	} else {
		return "--INFORMATION--\nName: " + name + ".\nBirthdate: " + birth_out + ".\nDeathdate: " + death_out + ".";
	} 
}
/*void Person::AddToFile() {
	Person* reader_arr = new Person[10];
	FILE* ff;
	int b = 0;
	int c = 0;
	std::fstream fs;
	fs.open("Person.dat");
	if (fs.is_open()) {
		ff = fopen("Person.dat", "rb");
		int fsize;
		fseek(ff, 0, SEEK_END);
		fsize = ftell(ff);
		b = fsize / sizeof(Person);
		Person* start_arr2 = new Person[b]; //создаётся новый массив из данных структуры
		fseek(ff, 0, SEEK_SET);
		fread(start_arr2, sizeof(Person), b, ff);
		c = start_arr2[b - 1].id + 1; //присваиваются данные об ID последней записи масссива
		fclose(ff);
		fs.close();
	}
	for (int i = 0; i < 10; i++)	{
		if (c >= b)
			reader_arr[i].id = c + i;
		else
			reader_arr[i].id = b + i;

		std::cin.getline(reader_arr[i].name, 30, ','); //необходимые данные о читателях
		std::cin >> reader_arr[i].birth.GetDay();
		std::cin >> reader_arr[i].birth.GetMonth();
		std::cin >> reader_arr[i].birth.GetYear();
	}

	ff = fopen("Person.dat", "a");

	fwrite(reader_arr, sizeof(Person), 10, ff); //все внесённые данные записываются

	fclose(ff);
}*/
