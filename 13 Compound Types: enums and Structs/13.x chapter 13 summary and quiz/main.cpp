#include <string>
#include <string_view>
#include <iostream>

enum class MonsterType{
	ogre,
	dragon,
	orc,
	giant_spider,
	slime,
};

std::string_view monsterTypeToString(const MonsterType type)
{
	using enum MonsterType;
	switch (type) {
	case ogre:		return "Ogre";
	case dragon:		return "Dragon";
	case giant_spider:	return "Giant Spider";
	case slime:		return "Slime";
	case orc:		return "Orc";
	default:		return "???";
	}
}

struct Monster{
	std::string name {};
	MonsterType type {};
	int hp {};
};

void printMonster(const Monster& monster)
{
	std::cout << "This " << monsterTypeToString(monster.type) <<
		" is named " << monster.name << " and has " <<
		monster.hp << " health.\n";
}

int main()
{
	Monster ogre {"Torg", MonsterType::ogre, 145};
	Monster slime {"Blurp", MonsterType::slime, 23};
	printMonster(ogre);
	printMonster(slime);
}

