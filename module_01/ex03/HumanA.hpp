#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
class HumanA
{
private:
	std::string name;
	Weapon weapon;
public:
	void attack();
	HumanA(std::string name, Weapon type);
	HumanA();
	~HumanA();
};

#endif