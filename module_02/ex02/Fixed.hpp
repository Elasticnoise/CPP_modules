/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:35:03 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/29 23:35:04 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{
private:
	int fixed_point_num;
	static const int fractional_bits_num = 8;
public:
	Fixed();
	Fixed (const Fixed &obj);
	Fixed (const int num);
	Fixed (const float fl_p_num);
	~Fixed();
	int	getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int toInt() const;
	Fixed & operator =(const Fixed &other);
	bool operator >(const Fixed & other);
	bool operator <(const Fixed & other);
	bool operator >=(const Fixed & other);
	bool operator <=(const Fixed & other);
	bool operator ==(const Fixed & other);
	bool operator !=(const Fixed & other);
	Fixed operator +(const Fixed & other);
	Fixed operator -(const Fixed & other);
	Fixed operator *(const Fixed & other);
	Fixed operator /(const Fixed & other);
};

std::ostream & operator <<(std::ostream &o, Fixed const & other);

#endif