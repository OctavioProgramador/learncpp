#include <iostream>

struct Pair
{
	int m_x {};
	int m_y {};

	constexpr int greater() const
	{
		return (m_x > m_y ? m_x : m_y);
	}
};

int main()
{
	constexpr Pair p { 5, 6 };	// inputs are constexpr values
	std::cout << p.greater() << '\n'; // p.greater() evaluates at runtime

	constexpr int g { p.greater() }; // compile error: greater() not constexpr
	std::cout << g << '\n';

	return 0;
}

