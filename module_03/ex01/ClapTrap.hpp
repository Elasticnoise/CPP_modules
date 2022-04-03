/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:01:13 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/03 17:01:15 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	ClapTrap();
	std::string		_name;
	unsigned int	_hit_points;
	unsigned int	_energy;
	unsigned int	_damage;

public:
	ClapTrap(std::string _name);
	ClapTrap(const ClapTrap &other);
	ClapTrap & operator =(const ClapTrap &other);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	const std::string	&getName() const;
	unsigned int	getHitPoints() const;
	unsigned int	getEnergy() const;
	unsigned int	getDamage() const;
};

std::ostream & operator <<(std::ostream &o, ClapTrap const & other);

#endif
