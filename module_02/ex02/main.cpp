/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:35:19 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/29 23:35:20 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c (Fixed(3.0f));
	Fixed d (3);
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << "c= " << c << std::endl;
	std::cout << "d= " << d << std::endl;
	std::cout << "c + d= " << c + d << std::endl;
	std::cout << "c - d= " << c - d << std::endl;
	std::cout << "c * d= " << c * d << std::endl;
	std::cout << "c / d= " << c / d << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << "--------------------" << std::endl;
	return 0;
}
