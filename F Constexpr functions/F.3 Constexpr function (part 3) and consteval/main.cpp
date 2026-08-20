#include <iostream>

consteval int greater(int x, int y)
{
	return (x > y ? x : y);
}

int main()
{
	constexpr int g { greater(5, 6) }; // compile time evaluation

	return 0;
}
