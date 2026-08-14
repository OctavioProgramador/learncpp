#include <iostream>

int main()
{
	int x { 5 };
	int& ref { x };

	std::cout << x << '\n';
	std::cout << ref << '\n';

	return 0;
}
