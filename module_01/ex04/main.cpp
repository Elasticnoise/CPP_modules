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
	std::size_t		found;
	std::string 	tmp;
	std::string 	res;

	if (argc == 4)
	{
		if (ifs.is_open())
		{
			str1 = argv[2];
			str2 = argv[3];
			std::ofstream ofs("file.replace");
			while (getline(ifs, s))
			{
				res += s + '\n';
				found = s.find(str1);
			}
			size_t pos = 0;
			while ((pos = res.find(argv[2])) != std::string::npos)
			{
				tmp = res;
				res = res.substr(0, pos);
				res += str2;
				res += tmp.substr(pos + str1.length(), tmp.length());
			}
			std::cout << res;
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