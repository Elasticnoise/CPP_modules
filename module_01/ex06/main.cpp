/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:06:18 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/27 22:06:21 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	har;

	if (argc == 2)
		har.complain(argv[1]);
	else
		std::cout << "Error: arguments" << std::endl;
	return (0);
}
