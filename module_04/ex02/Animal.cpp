/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:44:31 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/05 19:44:33 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal()
{
	std::cout <<"[Animal]"<< "Default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	*this = other;
}

AAnimal	&AAnimal::operator =(const AAnimal &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "[Animal]" << ": Destructor called" << std::endl;
}