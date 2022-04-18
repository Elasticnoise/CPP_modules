/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 20:45:51 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/18 20:45:52 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
int main()
{
	std::cout << "Out of range test:" << std::endl;
	Array<int>numbers(7);
	try
	{
		std::cout << numbers[7] << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

//	try
//	{
//		numbers[-3] = 0;
//	}
//	catch (std::exception& ex)
//	{
//		std::cout << ex.what() << std::endl;
//	}



}
