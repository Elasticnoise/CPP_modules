/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:43:13 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/06 21:43:14 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
//	std::cout <<"[MateriaSource]"<< "Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		inventory[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
}

MateriaSource &MateriaSource::operator =(const MateriaSource & other)
{
//	std::cout << "[MateriaSource] Copy assignment operator called" << std::endl;
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

MateriaSource::~MateriaSource()
{
//	std::cout << "[MateriaSource]" << ": Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete inventory[i];
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == nullptr)
		{
			this->inventory[i] = materia;
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != nullptr)
		{
			if (inventory[i]->getType() == type)
				return (inventory[i]->clone());
		}
	}
	return (nullptr);
}