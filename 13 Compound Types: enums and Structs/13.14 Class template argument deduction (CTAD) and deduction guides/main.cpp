#include <utility>

int main()
{
	[[maybe_unused]] std::pair<int, int> p1{ 1, 2 };	// explicitly specify class template std::pair<int, int> (C++11 onward)
	[[maybe_unused]] std::pair p2{ 1, 2 };	// CTAD used to deduce std::pair<int, int> from the initializers (c++17)
	std::pair p1 { 3.4f, 5.6f };	// deduced to pair<float, float>
	std::pair p2 { 1u, 2u };	// deduced to pair<unsigned int, unsigned int>
	return 0;
}
