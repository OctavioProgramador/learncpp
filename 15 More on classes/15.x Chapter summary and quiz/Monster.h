#ifndef H_MONSTER
#define H_MONSTER

#include<string>
#include<iostream>

class Monster
{

public:

	enum Type
	{
		dragon,
		goblin,
		ogre,
		orc,
		skeleton,
		troll,
		vampire,
		zombie
	};

	Monster(Type type, 
		std::string name, 
		std::string roar, 
		int hitPoints);

	void print();

private:
	Type m_type{};
	std::string m_name{};
	std::string m_roar{};
	int m_hitPoints{};

	std::string_view getTypeString();
};

#endif
