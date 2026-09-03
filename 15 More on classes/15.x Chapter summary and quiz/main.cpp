#include "MonsterGenerator.h"
#include "Monster.h"

int main()
{
	Monster skeleton{ MonsterGenerator::generate() };
	skeleton.print(); 

	return 0;
}

