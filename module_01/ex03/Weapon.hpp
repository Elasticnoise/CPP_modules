#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string type;
public:
	explicit Weapon(std::string  const &type);
	~Weapon();
	std::string const & getType() const;
	void	setType(std::string const &type);
	Weapon&operator=(Weapon const &other);
	Weapon(Weapon const &other);
};
#endif