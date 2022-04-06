/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:54:51 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/06 19:54:52 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

Character::Character()
{
//	std::cout <<"[Character]"<< "Default constructor called" << std::endl;
}

Character::Character(const std::string &type):name(type)
{
	std::cout << "Character constructor is called" << std::endl;
}

Character::Character(const Character &other)
{
	*this = other;
}

Character &Character::operator =(const Character & other)
{
//	std::cout << "[Character] Copy assignment operator called" << std::endl;
	this->name = other.getName();
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != nullptr)
			delete inventory[i];
		this->inventory[i] = other.inventory[i]->clone();
	}
	return (*this);
}

Character::~Character()
{
//	std::cout << "[Character]" << ": Destructor called" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if (inventory[i] != nullptr)
			delete inventory[i];
	}
}

void Character::equip(AMateria *m)
{
	int i = 0;
	while (inventory[i])
		i++;
	if (i < 4)
		inventory[i] = m;
	else
		delete m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
	if (inventory[idx] != nullptr)
		inventory[idx]->use(target);
}

std::string const &Character::getName() const
{
	return (this->name);
}
