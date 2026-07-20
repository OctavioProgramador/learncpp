#include <iostream>

int main()

{
	const int SIZE {5};
	int outer {SIZE};
	while(outer > 0)
	{
		int inner {SIZE - outer + 1};

		for (int iii = SIZE; iii > 0; --iii)
		{
			if (inner < iii)
			{
				std::cout << "  ";
			}
			else{
				std::cout << iii << " ";
			}
		}
		std::cout << '\n';

		outer --;
	}
}
