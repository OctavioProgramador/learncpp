#include <iostream>
#include <array>

void passByRef(const std::array<int, 5>& arr) // we must explicitly specify <int, 5> here
{
	std::cout << arr[0] << '\n';
}

int main()
{
	std::array arr { 9, 7, 5, 3, 1};
	passByRef(arr);
}
