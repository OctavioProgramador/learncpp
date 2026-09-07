#include <iostream>

struct Something
{
	static int s_value;
};

int Something::s_value{ 1 }; // define and initialize s_value to 1 

int main()
{
	Something first{};
	Something second{};

	first.s_value = 2;

	std::cout << first.s_value << '\n';
	std::cout << second.s_value << '\n';

	return 0;
}
