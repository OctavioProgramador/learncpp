#include <iostream>

struct Something
{
	static int s_value;
};

int Something::s_value{ 1 }; // define and initialize s_value to 1 

int main()
{

	Something::s_value = 2;

	std::cout << Something::s_value << '\n';

	return 0;
}
