#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}
void	HumanB::setWeapon(Weapon type)
{
	this->weapon = type;
}
void HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
