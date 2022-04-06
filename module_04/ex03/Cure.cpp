/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:40:59 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/06 18:41:01 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
//	std::cout <<"[Cure]"<< "Default constructor called" << std::endl;
	this->type = "cure";
}

Cure::Cure(const Cure &other)
{
	*this = other;
}

Cure &Cure::operator =(const Cure & other)
{
//	std::cout << "[Cure] Copy assignment operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

Cure::~Cure()
{
//	std::cout << "[Cure]" << ": Destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "heals " << target.getName() <<"'s wounds" << std::endl;
}
