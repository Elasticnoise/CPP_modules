/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:40:45 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/06 18:40:46 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout <<"[Ice]"<< "Default constructor called" << std::endl;
	this->type = "ice";
}

Ice::Ice(const Ice &other):AMateria(other)
{
	*this = other;
}

Ice &Ice::operator =(const Ice & other)
{
//	std::cout << "[Ice] Copy assignment operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

Ice::~Ice() {}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
}