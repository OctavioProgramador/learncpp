#include <iostream>
#include <vector>
#include <string_view>
#include <cassert>

bool isNumberDivisbleBy(int number, int divisor)
{
	return (number % divisor) == 0;
}

void fizzbuzz(int n){

	static const std::vector<int> divisors { 3, 5, 7, 11, 13, 17, 19 };
	static const std::vector<std::string_view> words { 
		"fizz", "buzz", "pop", "bang", "jazz", "pow", "boom" };

	std::size_t divisors_length { divisors.size() };
	assert(divisors_length == words.size());

	for (int iii{1}; iii <= n; ++iii)
	{

		bool isDivisibleByAny { false };


		for (std::size_t index { 0 }; index < divisors_length; ++index) {
			if (isNumberDivisbleBy(iii, divisors.at(index))) {
				std::cout << words.at(index);
				isDivisibleByAny = true;
			}		
		}

		if (!isDivisibleByAny) 
			std::cout << iii;
		std::cout << '\n';
	}
}

int main()
{
	constexpr int number_of_fizzs { 150 };
	fizzbuzz(number_of_fizzs);
	return 0;
}
