#include <iostream>

template<typename T>
auto add(T x, T y)
{
	return x + y;
}

template<typename T, typename U>
auto add(T x, U y)
{
	return x + y;
}

template <typename T, typename U, typename V>
auto add(T x, U y, V z)
{
	return x + y + z;
}

int main()
{
	std::cout << add(1.2, 3.4) << '\n';
	std::cout << add(5.6, 7) << '\n';
	std::cout << add(8, 9, 10) << '\n';
	return 0;
}
