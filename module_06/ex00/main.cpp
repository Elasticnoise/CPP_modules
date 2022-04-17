/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:54:58 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/17 16:55:00 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Convert.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		Convert convert(argv[1]);

		convert.converter();
	}
	else
	{
		std::cout << "Error: arguments" << std::endl;
		return (-1);
	}
}
