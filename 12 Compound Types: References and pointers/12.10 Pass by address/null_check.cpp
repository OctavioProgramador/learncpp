#include <iostream>
#include <cassert>

void print(int * ptr)
{
	assert(ptr);	// fail the program in debug mode if a null pointer is passed
	if (!ptr)	// if ptr is not a null pointer 
		return;
	std::cout << *ptr << '\n';
}

int main()
{
	int x{ 5 };
	print(&x);
	print(nullptr);

	return 0;
}
