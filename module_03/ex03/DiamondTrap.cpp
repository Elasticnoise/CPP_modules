/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 23:23:27 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/04 22:08:16 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "[DiamondTrap] " << "Default constructor called" << std::endl;
	_hit_points = FragTrap::_f_trap_hit_points;
	_energy = ScavTrap::_sc_trap_energy;
	_damage = FragTrap::_f_trap_damage;
	this->_name = ClapTrap::_name;
}
DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "[DiamondTrap] " << name << ": Constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = FragTrap::_f_trap_hit_points;
	this->_energy = ScavTrap::_sc_trap_energy;
	this->_damage = FragTrap::_f_trap_damage;
	ClapTrap::_name += "_clap_name";
}
DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	*this = other;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] "<< this->_name << ": Destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator =(const DiamondTrap &other)
{
	std::cout << "[DiamondTrap] " << "Copy assignment operator called" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy = other._energy;
	this->_damage = other._damage;
	return (*this);
}

const std::string &DiamondTrap::getName() const
{
	return (_name);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "[ClapTrap] _name: "<< ClapTrap::_name<< std::endl;
	std::cout << "[DiamondTrap] _name: "<< this->_name << std::endl;
}
