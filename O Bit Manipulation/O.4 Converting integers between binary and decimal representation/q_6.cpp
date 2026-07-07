#include <iostream>

int main()
{
	int input_number {};
	std::cout << "Enter a number between 0 and 255: ";
	std::cin >> input_number;
	int base_two_number {128};
	std::string binary {};
	while(base_two_number >= 1){
	    if (input_number >= base_two_number) {
	    	binary += "1";
	    	input_number -= base_two_number;
	    }
	    else{
	    	binary += "0";
	    }
		base_two_number /= 2;
	}
	std::cout << binary << "\n";
}
