#include <iostream>
#include <vector>

template<typename T>
void printArray(const std::vector<T> & array)
{
	std::size_t length { array.size() };

	for (std::size_t index { 0 }; index < length - 1; ++index)
	{
		std::cout << array[index] << ", ";
	}
	std::cout << array[length - 1] << '\n';
}

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    // Add your code here
    printArray(arr);

    return 0;
}
