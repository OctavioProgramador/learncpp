#include <iostream>
struct Employee
{
	int id {};
	int age {};
	double wage {};
};

int main()
{
	Employee joe {};

	joe.age = 32;	// we use member selection operator (.) to select the age member of variable joe

	std::cout << joe.age << '\n'; // print joe's age

	return 0;
}
