/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 23:23:22 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/04 22:08:22 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
	std::string _name;
	DiamondTrap();
public:
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap & other);
	DiamondTrap & operator =(const DiamondTrap &other);
	~DiamondTrap();

	void	whoAmI();
	void attack(const std::string& target);
	const std::string	&getName() const;
//	unsigned int	getDamage() const;
};

//std::ostream & operator <<(std::ostream &o, DiamondTrap const & other);
#endif
