/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:00:54 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/18 17:00:58 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <class T>
void my_print(T & t)
{
	std::cout << t << std::endl;
}

template <class T>
void increment(T & t)
{
	t += 4;
}

template <class T>
void iter(T * array, int len, void (*func)(T & x))
{
	for (int i = 0; i < len; i++)
		func(array[i]);
}

#endif
