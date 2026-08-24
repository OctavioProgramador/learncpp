#include <iostream>

constexpr int greater(int x, int y)
{
	return (x > y ? x : y);
}

int main()
{
	std::cout << greater(5, 6) << '\n'; // greater(5, 6) may be evaluated at compile time
	constexpr int g { greater(5, 6) }; // greater(5, 6) must be evaluated at compile-time
	std::cout << g << '\n'; // prints 6
	return 0;
}
