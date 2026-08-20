template<typename T=int, typename U=int>	// default T and U to type
						// int
struct Pair
{
	T first{};
	U second{};
};

template<typename T, typename U>
Pair(T, U) -> Pair<T, U>;

int main()
{
	[[maybe_unused]] Pair<int, int> p1{ 1, 2 };	// explicitly specify class template
					// Pair<int, int> (C++11 onward)
	[[maybe_unused]] Pair p2{ 1, 2 };	// CTAD used to deduce Pair<int, int> from
				// the initializers (C++17)
	[[maybe_unused]] Pair p3;
	return 0;
}
