#include <vector>
#include <type_traits>
#include <iostream>

using Index = std::ptrdiff_t;

template<typename T>
constexpr std::size_t toUZ(T value)
{
	static_assert(std::is_integral<T>() || std::is_enum<T>());
	return static_cast<std::size_t>(value);
}

int main()
{
	std::vector arr { 9, 7, 5, 3, 1 };

	for (auto index { std::ssize(arr) - 1}; index >=0; --index) {
		std::cout << arr[toUZ(index)] << ' ';
	}

	return 0;
}

