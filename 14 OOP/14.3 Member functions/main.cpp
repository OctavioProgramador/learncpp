#include <iostream>

struct Date
{
	int year {};
	int month {};
	int day {};

	void print()	// defines a member function named print
	{
		std::cout << year << '/' << month << '/' << day;
	}
};

int main()
{
	Date today { 2020, 10, 14 };	// aggregate initialize our struct
	today.day = 16;
	today.print();
	return 0;
}
