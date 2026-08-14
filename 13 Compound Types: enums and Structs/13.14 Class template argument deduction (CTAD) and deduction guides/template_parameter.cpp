#include <iostream>
#include <utility>

template<typename T, typename U>
void print(std::pair<T, U> p)
{
	std::cout << p.first << ' ' << p.second << '\n';
}

int main()
{
	std::pair p {1, 2};	// p deduced to std::pair<int, int>
	print(p);
	return 0;
}
