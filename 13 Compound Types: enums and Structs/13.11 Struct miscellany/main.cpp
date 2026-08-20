#include <iostream>

struct Employee
{
	int id {};
	int age {};
	double wage {};
};

struct Company
{
	int numberOfEmployees {};
	Employee CEO {};	// Employee is a struct within the company
};

int main()
{
	Company myCompany{ 7, {1, 32, 55000.0} };
	std::cout << myCompany.CEO.wage << '\n';
	return 0;
}
