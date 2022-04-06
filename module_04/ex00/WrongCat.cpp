/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:43:36 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/06 12:43:38 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout <<"[WrongCat]"<< "Default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
}

WrongCat	&WrongCat::operator =(const WrongCat &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat]" << ": Destructor called" << std::endl;
}