#include "pair.h"
#include <iostream>

void foo()
{
	Pair<int> p1{ 1, 3 };
	std::cout << max(p1) << " is larger\n";
}
