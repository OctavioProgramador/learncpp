#include <iostream>

template <typename T>
void printIDAndValue(T value)
{
	static int id{ 0 };
	std::cout << ++id <<  ") "  << value << '\n';
}

int main()
{
	printIDAndValue(12);
	printIDAndValue(13);
	printIDAndValue(14.5);
	return 0;
}
