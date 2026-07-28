#include "Random.h"
#include <iostream>

int main()
{
	constexpr int RANDOM_MIN {1};
	constexpr int RANDOM_MAX {200};
	constexpr int GUESSES {10};
	while(true)
	{

		int random_number = Random::get(RANDOM_MIN, RANDOM_MAX);
		std::cout << "Let's play a game. I'm thinking of a number between "
			<< RANDOM_MIN << " and " << RANDOM_MAX << 
			". You have " << GUESSES << " tries to guess what it is.\n";
		bool game_wonned{false};
		for (int number_of_guesses{GUESSES}; number_of_guesses > 0; --number_of_guesses)
		{
			std::cout << "Guess #" << GUESSES - number_of_guesses + 1 << ": ";
			int guess{};
			std::cin >> guess;
			if (guess == random_number)
			{
				game_wonned = true;
				break;
			}
			else if (guess > random_number)
			{
				std::cout << "Your guess is too high.\n";
			}
			else 
			{
				std::cout << "Your guess is too low.\n";
			}
		}

		if (game_wonned)
		{
			std::cout << "Correct! You win!\n";
		}
		else 
		{
			std::cout << "Sorry, you lose. The correct number was " << random_number << ".\n";
		}

		char play_again{};
		while(true)
		{
			std::cout << "Would you like to play again(y/n)? ";
			std::cin >> play_again;
			if (play_again == 'y')
			{
				break;
			}
			else if (play_again == 'n'){
				std::cout << "Thank you for playing.\n";
				goto end;
			}
		}
	}
end:
	;
	return 0;
}
