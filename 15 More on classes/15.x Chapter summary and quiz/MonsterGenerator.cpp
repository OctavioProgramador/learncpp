#include "MonsterGenerator.h"

std::string MonsterGenerator::getName(int name_index)
{
	switch (name_index) {
	case 0: 
		return "Bones";
	case 1:
		return "Nibblez";
	case 2:
		return "Drake";
	case 3:
		return "Vaal";
	case 4:
		return "Hermes";
	case 5:
		return "Goliath";
	default:
		return "???";
	}
}

std::string MonsterGenerator::getRoar(int roar_index){
	switch (roar_index)
	{
	case 0:
		return "*rattle*";
	case 1:
		return "*hiss*";
	case 2:
		return "*bark*";
	case 3:
		return "*thoom*";
	case 4:
		return "*growl*";
	case 5:
		return "*roar*";
	default:
		return "???";
	}
}

Monster MonsterGenerator::generate() {
	Monster::Type type { static_cast<Monster::Type>( Random::get(0,7)) };
	int nameIndex{ Random::get(0, 5)};
	int roarIndex{ Random::get(0, 5)};
	int hp{ Random::get(0, 100) };
	return Monster { type, getName(nameIndex), getRoar(roarIndex), hp};
}

