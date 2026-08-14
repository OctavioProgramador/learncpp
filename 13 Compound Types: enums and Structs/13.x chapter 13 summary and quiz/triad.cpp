#include <iostream>

template<typename T>
struct Triad
{
	T x{};
	T y{};
	T z{};
};

template<typename T>
Triad(T, T, T) -> Triad<T>;

template<typename T>
void print(const Triad<T>& triad)
{
	std::cout << '[' << triad.x << ", " << triad.y << ", " << triad.z 
		<< "]";
}

int main()
{
	Triad t1 { 1, 2, 3 };	// note: uses CTAD to deduce template args
	print(t1);

	Triad t2 { 1.2, 3.4, 5.4 };	// note: uses CTAD to deduce template args

	print(t2);
}
