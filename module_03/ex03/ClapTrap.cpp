/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:01:03 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/03 17:01:05 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
		std::cout << "[ClapTrap] " << "Default constructor called" << std::endl;
		this->_hit_points = 10;
		this->_energy = 10;
		this->_damage = 0;
}
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "[ClapTrap] " << name << ": Constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = 10;
	this->_energy = 10;
	this->_damage = 0;
}
ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
}
ClapTrap::~ClapTrap()
{
		std::cout << "[ClapTrap] "<< this->_name << ": Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator =(const ClapTrap &other)
{
	std::cout << "[ClapTrap] " << "Copy assignment operator called" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy = other._energy;
	this->_damage = other._damage;
	return (*this);
}

const std::string &ClapTrap::getName() const
{
	return (_name);
}

unsigned int	ClapTrap::getHitPoints() const
{
	return (_hit_points);
}

unsigned int	ClapTrap::getEnergy() const
{
	return (_energy);
}

unsigned int	ClapTrap::getDamage() const
{
	return (_damage);
}

void	ClapTrap::attack(const std::string &target)
{
	if (_hit_points > 0 && _energy > 0)
	{
		std::cout << "[ClapTrap]"<< _name << " attacks " << target;
		std::cout << ", causing " << _damage << " points of damage!" << std::endl;
		_energy -= 1;
	}
	else if (_hit_points == 0 || _energy == 0)
	{
		std::cout << _name << " Can't attack, no life or energy!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points > amount)
	{
		std::cout << _name << " - take damage" << std::endl;
		_hit_points -= amount;
	}
	else
	{
		std::cout << _name << " - was died" << std::endl;
		_hit_points = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << _name << " - be repaird" << std::endl;
	if (_hit_points > 0 && _energy > 0)
	{
		this->_energy -= 1;
		this->_hit_points += amount;
	}
	else
		std::cout << _name << " - has no energy" << std::endl;
}
