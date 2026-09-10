#include <vector>
#include <iostream>
#include "signed_array_view.h"



int main()
{
	std::vector arr { 9, 7, 5, 3, 1 };
	SignedArrayView sarr { arr }; // create a signed array
			      // view of our std::vector

	for (auto index { sarr.ssize() - 1}; index >=0; --index) {
		std::cout << sarr[index] << ' ';
	}

	return 0;
}

