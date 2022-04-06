/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:28:41 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/06 18:28:42 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout <<"[AMateria]"<< "Default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

AMateria &AMateria::operator =(const AMateria & other)
{
//	std::cout << "[AMateria] Copy assignment operator called" << std::endl;
	this->type = other.getType();
	return (*this);
}

AMateria::~AMateria()
{
//	std::cout << "[AMateria]" << ": Destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria attacks" << target.getName() << std::endl;
}
