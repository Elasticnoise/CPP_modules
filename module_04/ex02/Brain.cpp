/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:49:11 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/06 14:49:12 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.hpp"
#include "Brain.hpp"
Brain::Brain()
{
	std::cout <<"[Brain]"<< "Default constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
}

Brain & Brain::operator =(const Brain &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	for (size_t i = 0; i < other.ideas->length(); i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "[Brain]" << ": Destructor called" << std::endl;
}
