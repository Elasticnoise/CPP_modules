/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:31:28 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/19 15:31:33 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <set>

template<typename T>
int	easyfind(T & array, int num)
{
	typename T::iterator	it;
	it = std::find(array.begin(), array.end(), num);
	if (it == array.end())
		throw "Integer isn't find";
	return *it;

}

#endif

