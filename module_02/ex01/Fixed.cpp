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

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	fixed_point_num = num << Fixed::fractional_bits_num;
	std::cout << "intARG= " << fixed_point_num << std::endl;
}

Fixed::Fixed(const float fl_p_num)
{
	std::cout << "Float constructor called" << std::endl;
	fixed_point_num = roundf(fl_p_num * ( 1 << Fixed::fractional_bits_num));
	std::cout << "floatARG= " << fixed_point_num << std::endl;
}

float Fixed::toFloat() const
{
	return ((float)fixed_point_num / (float)(1 << Fixed::fractional_bits_num));
}

int Fixed::toInt() const
{
	return (fixed_point_num >> Fixed::fractional_bits_num);
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

std::ostream  & operator <<(std::ostream & o, Fixed const & other)
{
	o << other.toFloat();
	return o;
}
