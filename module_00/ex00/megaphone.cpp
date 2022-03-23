/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:07:49 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/23 18:04:36 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int i = 1;
	int j;

	if (argc > 1) {
		while (argv[i]) {
			j = 0;
			while (argv[i][j]) {
				std::cout << (char)std::toupper(argv[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	} else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
}
