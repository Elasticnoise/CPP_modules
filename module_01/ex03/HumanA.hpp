#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
class HumanA
{
private:
	std::string name;
	Weapon& weapon;
public:
	~HumanA();
	void attack() const;
	HumanA(std::string name, Weapon &weapon);
};

#endif