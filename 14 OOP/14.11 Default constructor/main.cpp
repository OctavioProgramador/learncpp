#include <iostream>

class Foo
{
public:
	Foo()	// default constructor
	{
		std::cout << "Foo default constructed\n";
	}
};

int main()
{
	Foo foo{};
	return 0;
}
