#include <vector>
#include <iostream>

void pushIntoStack(std::vector<int> & stack, int valueToPush)
{

	stack.push_back(valueToPush);

	std::cout << "Push " << valueToPush << " \t(Stack: " << stack[0];

	const std::size_t stack_size { stack.size() };

	for (std::size_t index { 1 }; index < stack_size ; ++index) {
		std::cout << ' ' << stack[index];
	}

	std::cout << ")\n";
}

void popStack(std::vector<int> & stack)
{
	stack.pop_back();

	const std::size_t stack_size { stack.size() };

	if (stack_size < 1)
	{
		std::cout << "Pop \t(Stack: empty)\n";
	}
	else{
		std::cout << "Pop \t(Stack: " << stack[0];

		const std::size_t stack_size { stack.size() };

		for (std::size_t index { 1 }; index < stack_size ; ++index) {
			std::cout << ' ' << index;
		}

		std::cout << ")\n";
	}

}

int main(){

	std::cout << "\tStack empty\n";		
	std::vector<int> stack {};

	pushIntoStack(stack, 1);
	pushIntoStack(stack, 2);
	pushIntoStack(stack, 3);

	popStack(stack);

	pushIntoStack(stack, 4);
	popStack(stack);
	popStack(stack);
	popStack(stack);
}
