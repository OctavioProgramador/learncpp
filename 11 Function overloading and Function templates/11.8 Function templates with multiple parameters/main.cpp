#include <iostream>

// template <typename T>
template <typename T, typename U>
// T max(T x, T y)
// T max(T x, U y)
auto max(T x, U y)
{
	return (x < y) ? y : x;
}

int main()
{
	// std::cout << max(static_cast<double>(2), 3.5) << '\n';
	// std::cout << max<double>(2, 3.5) << '\n';
	std::cout << max(2, 3.5) << '\n';
	return 0;
}

