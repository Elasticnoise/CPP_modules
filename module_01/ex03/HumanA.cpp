#include "HumanA.hpp"

//HumanA::HumanA() : weapon("knife") {};

HumanA::HumanA(std::string name, Weapon type)
{
	this->name = name;
	this->weapon = type;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}