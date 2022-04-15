//#include <iostream>
#include "Date.h"

Date::Date() { day = 0; month = 0; year = 0; }

Date::Date(int _day, int _month, int _year) {
	day = _day;
	month = _month;
	year = _year;
}

Date Date::operator=(const Date& tmp) {
	day = tmp.day;
	month = tmp.month;
	year = tmp.year;
	return *this;
}

void Date::SetDay(int _day) { day = _day; }

void Date::SetMonth(int _month) { month = _month; }

void Date::SetYear(int _year) { year = _year; }

void Date::SetDate(int _day, int _month, int _year) {
	day = _day;
	month = _month;
	year = _year;
}

std::string Date::GetDate() {
	std::string day_str, month_str, year_str;
	day_str = std::to_string(day);
	if (day < 10) { day_str = "0" + std::to_string(day); }
	month_str = std::to_string(month);
	if (month < 10) { month_str = "0" + std::to_string(month); }
	year_str = std::to_string(year);
	return day_str + "." + month_str + "." + year_str;
}

int Date::CheckDate() {
	if (year == 0 && month == 0 && day == 0) {
		return 1;
	} else {
		if (year <= 0) {
			return -1;
		}
		else if (month <= 0 || month > 12) {
			return -2;
		}
		else if (day <= 0 || day > 31) {
			return -3;
		}
		else return 0;
	}
}
