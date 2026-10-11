#include <array>
#include <iostream>

template<typename T, std::size_t N>
void printElement3(const std::array<T, N>& arr)
{
	std::cout << std::get<3>(arr) << '\n';
}

int main()
{
	std::array arr { 9, 7,5, 3, 1};
	printElement3(arr); // okay
						//
	std::array arr2 { 9, 7 };
	printElement3(arr2); // compile error
}

