/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:03:52 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/03 17:03:55 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
ScavTrap::ScavTrap()
{
	std::cout <<"[ScavTrap]"<< "Default constructor called" << std::endl;
	this->_name = "Default";
	this->_hit_points = 10;
	this->_energy = 10;
	this->_damage = 0;
}
ScavTrap::ScavTrap(std::string name)
{
	std::cout <<"[ScavTrap]"<< name << ": Constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy = 50;
	this->_damage = 20;
}
ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
}
ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap]" << this->_name << ": Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator =(const ScavTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy = other._energy;
	this->_damage = other._damage;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (_hit_points > 0 && _energy > 0)
	{
		std::cout << "[ScavTrap]"<< _name << " attacks " << target;
		std::cout << ", causing " << _damage << " points of damage!" << std::endl;
		_energy -= 1;
	}
	else if (_hit_points == 0 || _energy == 0)
	{
		std::cout << _name << " Can't attack, no life or energy!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

