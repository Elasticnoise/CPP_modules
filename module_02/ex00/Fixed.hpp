/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:35:49 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/29 18:35:50 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class Fixed
{
private:
	int fixed_point_num;
	static const int fractional_bits_num = 8;
public:
	Fixed();
	Fixed (const Fixed &obj);
	~Fixed();
	int	getRawBits() const;
	void setRawBits(int const raw);
	Fixed & operator =(const Fixed &other);
};

#endif
