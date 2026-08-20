#include <iostream>

constexpr int greater(int x, int y)
{
	return (x > y ? x : y);
}

int main()
{
	int x{ 5 };	// non constexpr
	int y{ 6 };	// non constexpr
	
	std::cout << greater(x, y) << " is greater!\n"; // will be evaluated at runtime

	return 0;
}
