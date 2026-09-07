#include "Monster.h"

Monster::Monster(Monster::Type type, std::string name, std::string roar, int hitPoints)
		: m_type{type}, m_name{name}, m_roar{roar}, m_hitPoints{hitPoints}
{}



void Monster::print()
{
	if(m_hitPoints > 0)
		std::cout << m_name << " the " << 
			getTypeString() << " has " << 
			m_hitPoints << " hit points and says " 
			<< m_roar << ".\n";
	else
		std::cout << m_name << " the " << 
			getTypeString() << " is dead.\n";
}


std::string_view Monster::getTypeString(){
	switch(m_type)
	{
	case Type::dragon:
		return "dragon";
	case Type::goblin:
		return "globlin";
	case Type::ogre:
		return "ogre";
	case Type::orc:
		return "orc";
	case Type::skeleton:
		return "skeleton";
	case Type::troll:
		return "troll";
	case Type::vampire:
		return "vampire";
	case Type::zombie:
		return "zombie";
	default:
		return "???";
	}
}

