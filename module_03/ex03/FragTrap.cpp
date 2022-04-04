/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 22:52:27 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/03 22:52:29 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "[FragTrap] " << "Default constructor called" << std::endl;
	this->_hit_points = 100;
	this->_f_trap_hit_points = 100;
	this->_energy = 100;
	this->_damage = 30;
	this->_f_trap_damage = 30;
}
FragTrap::FragTrap(std::string name)
{
	std::cout << "[FragTrap] " << name << ": Constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy = 100;
	this->_damage = 30;
}
FragTrap::FragTrap(const FragTrap &other)
{
	*this = other;
}
FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] "<< this->_name << ": Destructor called" << std::endl;
}

FragTrap &FragTrap::operator =(const FragTrap &other)
{
	std::cout << "[FragTrap] " << "Copy assignment operator called" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy = other._energy;
	this->_damage = other._damage;
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << "[FragTrap] " << _name << " says high fives" << std::endl;
}