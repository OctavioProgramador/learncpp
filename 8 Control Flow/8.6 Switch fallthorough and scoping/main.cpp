#include <iostream>

int calculate(int operand_1, int operand_2, char math_operator)
{
	int result { 0 };
	switch (math_operator)
	{
	case '+':
		result = operand_1 + operand_2;
		break;
	case '-':
		result = operand_1 - operand_2;
		break;
	case '*':
		result = operand_1 * operand_2;
		break;
	case '/':
		result = operand_1 / operand_2;
		break;
	default:
		std::cout << "Invalid operand " << math_operator << '\n';
		break;
	}
	return result;
}

int main(){
	std::cout << calculate(1, 2, '+') << '\n';
	std::cout << calculate(2, 5, '-') << '\n';
	std::cout << calculate(4, 4, '*') << '\n';
	std::cout << calculate(10, 2, '/') << '\n';
	std::cout << calculate(10, 2, 'x') << '\n';
	return 0;
}

