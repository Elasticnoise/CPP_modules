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
	this->name = "";
	std::cout <<"[Character]"<< "Default constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		inventory[i] = nullptr;
}

Character::Character(const std::string &type):name(type)
{
	std::cout << "Character constructor is called" << std::endl;
	for(int i = 0; i < 4; i++)
		inventory[i] = nullptr;
}

Character::Character(const Character &other)
{
	this->name = other.name;
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
}

Character &Character::operator =(const Character & other)
{
	std::cout << "[Character] Copy assignment operator called" << std::endl;
	this->name = other.name;
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "[Character]" << ": Destructor called" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
}

void Character::equip(AMateria *m)
{
	int i = 0;
	while ((inventory[i] != nullptr) && i < 4)
		i++;
	if (i >= 0 && i <= 3)
	{
		inventory[i] = m;
		std::cout << "equipped" << std::endl;
//		std::cout << m->getType() << std::endl;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
//	if (idx >= 0 && idx <= 3 && (this->inventory[idx] != nullptr))
	(void) target;
	(void) idx;
	int i = 0;
	while(this->inventory[i])
	{
		std::cout << this->inventory[i] << std::endl;
		i++;
	}
//	std::cout << "!!!!!" << std::endl;
}

std::string const &Character::getName() const
{
	return (this->name);
}
