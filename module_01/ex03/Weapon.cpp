/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:49:25 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/29 15:49:26 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const &type)
{
	this->type = type;
}
Weapon::~Weapon() {}

const std::string & Weapon::getType() const
{
	return (this->type);
}

void	Weapon::setType(std::string const &type)
{
	this->type = type;
}
