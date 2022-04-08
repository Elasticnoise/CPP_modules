/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 21:31:40 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/05 21:31:41 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
Cat::Cat()
{
	std::cout <<"[Cat]"<< "Default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &other):Animal(other)
{
	std::cout << "[Cat]Copy constructor called" << std::endl;
	this->brain = new Brain(*(other.brain));

	*this = other;
}

Cat	&Cat::operator =(const Cat &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = other.type;
	*this->brain = *other.brain;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "[Cat]" << ": Destructor called" << std::endl;
	delete this->brain;
}

void Cat::makeSound() const
{
	std::cout << "meow!" << std::endl;
}

std::string	Cat::getType() const
{
	return (type);
}