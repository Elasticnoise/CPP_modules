/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamoundTrap.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 23:23:27 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/03 23:23:28 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamoundTrap.hpp"

DiamoundTrap::DiamoundTrap()
{
	std::cout << "[DiamoundTrap] " << "Default constructor called" << std::endl;
	this->_hit_points = 10;
	this->_energy = 10;
	this->_damage = 0;
}
DiamoundTrap::DiamoundTrap(std::string name)
{
	std::cout << "[DiamoundTrap] " << name << ": Constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy = 100;
	this->_damage = 30;
}
DiamoundTrap::DiamoundTrap(const DiamoundTrap &other)
{
	*this = other;
}
DiamoundTrap::~DiamoundTrap()
{
	std::cout << "[DiamoundTrap] "<< this->_name << ": Destructor called" << std::endl;
}

DiamoundTrap &DiamoundTrap::operator =(const DiamoundTrap &other)
{
	std::cout << "[DiamoundTrap] " << "Copy assignment operator called" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy = other._energy;
	this->_damage = other._damage;
	return (*this);
}
