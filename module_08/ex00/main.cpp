/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:31:13 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/19 15:31:15 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int	main()
{
	std::vector<int> vec;
	std::list<int> lst;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);

	lst.push_back(7);
	lst.push_back(8);
	lst.push_back(9);
	lst.push_back(11);
	try
	{
		easyfind(vec, 1);
		std::cout << "Integer is found" <<std::endl;
	}
	catch (char const * err)
	{
		std::cerr << err <<std::endl;
	}

	try
	{
		easyfind(lst, 11);
		std::cout << "Integer is found" <<std::endl;
	}
	catch (char const * err)
	{
		std::cerr << err <<std::endl;
	}
	return 0;
}
