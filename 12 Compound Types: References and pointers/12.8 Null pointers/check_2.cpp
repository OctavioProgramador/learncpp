#include <iostream>

int main()
{
	int x { 5 };
	int * ptr { &x };
	
	if (ptr)
	{
		std::cout << "ptr is null\n";
	}else 
	{
		std::cout << "ptr is non-null\n";
	}

	int * nullPtr {};
	std::cout << "nullPtr is " << (nullPtr ? "null\n" : "non-null\n"); 
	return 0;


}
