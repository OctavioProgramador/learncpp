
#include <iostream>

int main()
{

	int x { 5 };
	std::cout << x << '\n';	// print the value of variable x

	int * ptr { &x }; // ptr holds the address of x
	std::cout << *ptr << '\n';

	*ptr = 6;

	std::cout << x << '\n';
	std::cout << *ptr << '\n';

	return 0;

}
