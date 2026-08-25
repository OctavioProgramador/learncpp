#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date
{
private:
	int m_year{};
	int m_month{};
	int m_day{};

public:
	Date(int year, int month, int day);	// constructor
						// declaration

	void print() const; // print function declaration

	int getYear() const { return m_year; }
	int getMont() const { return m_month; }
	int getDay() const { return m_day; }
};

#endif
