#include "HumanB.hpp"

HumanB::HumanB(std::string const name): name(name) {}

void	HumanB::setWeapon(const Weapon &weapon)
{
	this->weapon = &weapon;
}
void HumanB::attack() const
{
	if (this->weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " cannot attack without weapon" << std::endl;
}

HumanB::~HumanB() {}
