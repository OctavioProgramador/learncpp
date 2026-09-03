#ifndef H_MONSTER_GENERATOR
#define H_MONSTER_GENERATOR

#include <string>
#include "Monster.h"
#include "Random.h"

namespace MonsterGenerator{

	std::string getName(int name_index);

	std::string getRoar(int roar_index);

	Monster generate();
}

#endif
