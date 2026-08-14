#include <iostream>

template<typename T, typename U>
struct Pair
{
	T first{};
	U second{};
};

template<typename T, typename U>
void print(Pair<T, U> p)
{
	std::cout << '[' << p.first << ", " << p.second << ']';
}

int main()
{
	[[maybe_unused]]	Pair<int, double> p0{ 1, 2.3 };	// a pair holding an int and a double
	Pair<double, int> p2{ 4.5, 6 };	// a pair holding an double and an int
	[[maybe_unused]] Pair<int, int> p3{ 7, 8 };	// a pair holding two ints
	print(p2);
	return 0;

}
