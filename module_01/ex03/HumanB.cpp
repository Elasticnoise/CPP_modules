/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:48:58 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/29 15:49:00 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
