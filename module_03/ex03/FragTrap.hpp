/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 22:52:32 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/03 22:52:34 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap: virtual public ClapTrap
{
protected:
	unsigned int _f_trap_hit_points;
	unsigned int _f_trap_damage;
	FragTrap();
public:
	FragTrap(std::string name);
	FragTrap(const FragTrap & other);
	FragTrap & operator =(const FragTrap &other);
	~FragTrap();

	void highFivesGuys();
};

#endif
