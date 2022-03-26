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
	std::string		str1;
	std::string 	str2;

	if (argc == 4)
	{
		if (ifs.is_open())
		{
			str1 = argv[2];
			str2 = argv[3];
			std::ofstream ofs("file.replace");
			while (ifs >> s)
			{
				std::cout << s << std::endl;
				if (s == str1)
					ofs << str2 << " ";
				else if (s == str2)
					ofs << str1 << " ";
				else if (s == "\n")
					ofs << std::endl;
				else
					ofs << s << " ";
			}
			std::cout << str1 << " " << std::endl;
		}
		else
			std::cout << "File do not open." << std::endl;
		ifs.close();

	}
	else
	{
		std::cout << "Error: arguments is not a valid" << std::endl;
	}
	return (0);
}