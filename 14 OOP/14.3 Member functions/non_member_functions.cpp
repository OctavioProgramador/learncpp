#include <iostream>

struct Foo
{
	void printHi() { std::cout << "Hi!\n"; }
};

int main()
{
	Foo f{};
	f.printHi();	// requires object to call

	return 0;
}
