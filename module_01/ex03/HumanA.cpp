/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:48:21 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/29 15:48:24 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon){}

HumanA::~HumanA() {}

void HumanA::attack() const
{
	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}
