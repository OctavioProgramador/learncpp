#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
	[[maybe_unused]] constexpr std::uint32_t option_viewed{ 0x01 };
	[[maybe_unused]] constexpr std::uint32_t option_edited{ 0x02 };
	[[maybe_unused]] constexpr std::uint32_t option_favorited{ 0x04 };
	[[maybe_unused]] constexpr std::uint32_t option_shared{ 0x08 };
	[[maybe_unused]] constexpr std::uint32_t option_deleted{ 0x10 };

	std::uint32_t myArticleFlags{ option_favorited };

	// Place all lines of code for the following quiz here
	myArticleFlags |= option_viewed;

	std::cout << std::bitset<8>{ myArticleFlags } << "\n";

	if (myArticleFlags & option_deleted) {
		std::cout << "The Article was deleted\n";
	}
	else{
		std::cout << "The Article was not deleted\n";
	}

	// Clear the article as favorite
	myArticleFlags &= static_cast<std::uint8_t>(~option_favorited);

	std::cout << std::bitset<8>{ myArticleFlags } << "\n";

	return 0;
}

