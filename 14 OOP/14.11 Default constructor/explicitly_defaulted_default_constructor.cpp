#include <iostream>

class Foo
{
private:
	int m_x {};
	int m_y {};

public:
	Foo() = default;

	Foo(int x, int y)	// default constructor
		: m_x {x}
		, m_y { y }
	{
		std::cout << "Foo(" << m_x << ", " << m_y << ") constructed\n";
	}
};

int main()
{
	[[maybe_unused]]	Foo foo1{};
}
