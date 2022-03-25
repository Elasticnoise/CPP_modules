/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 21:29:03 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/25 21:29:05 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char** argv)
{
	std::ifstream 	ifs(argv[1]);
	std::string		s;
//	unsigned int	dst1;
//	unsigned int	dst2;
	std::string		str1;
	std::string 	str2;
	ifs >> str1 >> str2;

	if (argc == 4)
	{
		while (getline(ifs, s))
		{
			std::cout << s << std::endl;
		}
		std::cout << str1 << " " << str2 << std::endl;
		ifs.close();
//		str1 = argv[1];
//		str2 = argv[2];
	}
	else
	{
		std::cout << "Error: arguments is not a valid" << std::endl;
	}
	return (0);
}