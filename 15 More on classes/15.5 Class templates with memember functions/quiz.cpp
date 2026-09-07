#include <iostream>
#include <string>

template<typename T, typename U, typename V>
class Triad
{
private:
	T m_x {};
	U m_y {};
	V m_z {};

public:
	Triad(const T& x, const U& y, const V& z) : m_x { x }, m_y { y }, m_z { z } {}

	void print() const {
		std::cout << "[" << m_x << ", " << m_y << ", " << m_z << "]";
	}

	const T& first() const {
		return m_x;
	}
};

int main()
{
	Triad<int, int, int> t1 { 1, 2, 3 };
	t1.print();
	std::cout << '\n';
	std::cout << t1.first() << '\n';

	using namespace std::literals::string_literals;

	const Triad t2{ 1, 2.3, "hello"s };
	t2.print();
	std::cout << '\n';

	return 0;
}
