#pragma once
#include <string>

class Date {
	int day, month, year;
public:
	Date();
	Date(int _day, int _month, int _year);
	Date operator=(const Date& tmp);
	void SetDate(int _day, int _month, int _year);
	void SetDay(int _day);
	void SetMonth(int _month);
	void SetYear(int _year);
	std::string GetDate();
	int CheckDate();
};

