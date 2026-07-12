#include <iostream>

void print() // this print() lives in the global namespace
{
	std::cout << " there\n";
}

namespace Foo
{
	void print() // this print() lives in the Foo namespace
	{
		std::cout << "Hello";
	}
}

int main()
{
	// print(); // call print() in Foo namespace
	Foo::print(); // call print() in Foo namespace
	::print();	// call print() in global namespace (same as just calling print() in this case)
	return 0;
}
