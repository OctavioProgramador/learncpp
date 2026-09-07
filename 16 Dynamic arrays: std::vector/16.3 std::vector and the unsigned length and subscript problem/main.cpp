#include <iostream>
#include <vector>

int main()
{
	std::vector prime {2, 3, 5, 7, 11};
	std::cout << "length: " << prime.size() << '\n'; // returns length as type `size_type`
							 // (alias for `std::size_t`)
	std::cout << "non-member length: " << std::size(prime) << '\n'; 
						// C++17, returns length as type `size_type`
						     // (alias for `std::size_t`)
	int length { static_cast<int>(prime.size()) }; // static cast return value to int
	std::cout << "Casted to int length: " << length << '\n';

	std::cout << "Length: using SSize() " << std::ssize(prime) << '\n'; // C++20, 
		// returns length as a large signed integral type
	std::cout << prime[3];	// print the value of eleent with index 3 (7)
	std::cout << prime[9];	// invalid index (undefined behavior)

	std::cout << prime.at(3); // print the value of element with index 3
	// std::cout << prime.at(9); // invalid index (throws exception)

	std::cout << prime[3] << '\n'; // okay: 3 converted from int to std::size_t, not a
				       // narrowing conversion

	constexpr int index { 3 }; // constexpr
	std::cout << prime[index] << '\n'; // okay: constexpr index implicitly converted to 
					   // std::size_t, not a narrowing conversion
	
	int index_2 {3};
	std::cout << prime.data()[index_2] << '\n';
	return 0;
}
