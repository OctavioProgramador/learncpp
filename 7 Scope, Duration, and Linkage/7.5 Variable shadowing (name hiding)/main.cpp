#include <iostream>

int main()
{	// outer block
	int apples{ 5 };	// here's the outer block apples
	{	// nested block
		// apples refers to outer block apples here
		std::cout << apples << '\n';	// print the value of outer block apples
		int apples{ 0 };	// define apples in the scope of the nested block
