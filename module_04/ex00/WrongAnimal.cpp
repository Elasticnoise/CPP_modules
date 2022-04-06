/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:42:37 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/06 12:42:38 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout <<"[WrongAnimal]"<< "Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
}

WrongAnimal	&WrongAnimal::operator =(const WrongAnimal &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal]" << ": Destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wronganimal sound!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}
