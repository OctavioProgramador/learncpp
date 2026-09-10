#include <cassert>
#include <vector>
#include <iostream>

namespace Students {
	enum Names 
	{
		kenny,// 0
		kyle, // 1
		stan,	// 2
		buttes,	// 3
		cartman, // 4
			 // add future enumerators here
		max_students, // 5
	};
}

int main()
{
	std::vector<int> testScores(Students::max_students); // create a vector with 5 elements

	// Ensure the number of test scores is the same as the number of students
	assert(std::size(testScores) == Students::max_students);

	testScores[Students::stan] = 76; // we are now updating the test score belonging to stan

	std::cout << "The class has " << Students::max_students << " students\n";
	return 0;
}
