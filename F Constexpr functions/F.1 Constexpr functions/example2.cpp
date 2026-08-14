#include <iostream>

constexpr int greater(int x, int y)
{
	return (x > y ? x : y);
}

int main()
{
	constexpr int g {greater(6, 5)};	// always at compile-time

	std::cout << g << " is greater\n";

	std::cout << greater(5, 6) << " is greater\n";	// may be evaluated at either runtime or compile-time

	int x { 5 };	// not constexpr but value is known at compile time

	std::cout << greater(x, 6) << " is greater!\n";	// likely evaluated at runtime

	std::cin >> x;

	std::cout << greater(x, 6) << " is greater!\n"; // always at runtime
	return 0;
}
