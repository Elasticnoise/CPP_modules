/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:04:00 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/03 17:04:02 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
protected:
	ScavTrap();
	unsigned int _sc_trap_energy;
public:
	ScavTrap(std::string _name);
	ScavTrap(const ScavTrap &other);
	ScavTrap & operator =(const ScavTrap &other);
	~ScavTrap();

	void guardGate();
	void attack(const std::string& target);
};

std::ostream & operator <<(std::ostream &o, ClapTrap const & other);

#endif
