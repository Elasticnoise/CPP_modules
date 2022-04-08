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

Animal::Animal()
{
	std::cout <<"[Animal]"<< "Default constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
}

Animal	&Animal::operator =(const Animal &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "[Animal]" << ": Destructor called" << std::endl;
}

void Animal::makeSound() const {}

std::string Animal::getType() const
{
	return this->type;
}