/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:57:30 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/17 18:57:31 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <ctime>
//#include <cstdlib>

class Base
{
public:
	virtual ~Base() {};
};

Base *	generate(void);
void	identify(Base* p);
void	identify(Base& p);
#endif
