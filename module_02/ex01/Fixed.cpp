/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:35:09 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/29 23:35:10 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point_num = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point_num = other.fixed_point_num;
}

Fixed &Fixed::operator =(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point_num = other.fixed_point_num;
	return (*this);
}

int 	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called " << std::endl;
	return (this->fixed_point_num);
}

void Fixed::setRawBits(const int raw)
{
	this->fixed_point_num = raw;
}
