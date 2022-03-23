#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

void	*Weapon::getType()
{
	return (&this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}