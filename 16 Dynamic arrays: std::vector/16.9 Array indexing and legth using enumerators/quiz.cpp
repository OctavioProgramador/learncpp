#include <cassert>
#include <vector>
#include <iostream>

namespace Animals {
	enum Species 
	{
		chicken,
		dog,
		cat,
		elephant,
		duck,
		snake,
		max_species
	};
}

int main()
{
	std::vector<int> legs {2, 4, 4, 4, 2, 0 };

	assert(std::size(legs) == Animals::max_species);

	std::cout << "The Elephant has " << legs[Animals::elephant] << " legs\n";

	return 0;
}
