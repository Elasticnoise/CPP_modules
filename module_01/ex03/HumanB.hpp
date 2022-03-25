#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
class HumanB
{
private:
	std::string name;
	const Weapon* weapon;
public:
	HumanB(std::string const name);
	~HumanB();
	void attack() const;
	void setWeapon(const Weapon &type);
};
#endif