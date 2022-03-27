/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:07:29 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/27 22:07:30 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "do debug" << std::endl;
}

void Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "do info" << std::endl;
}

void Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "do warning" << std::endl;
}
void Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "do error" << std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;
	std::string	levels[] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	void (Harl::* mod_level[]) () =
	{
	&Harl::debug,
	&Harl::info,
	&Harl::warning,
	&Harl::error
	};

	for (; i < 4; i++)
	{
		if (level == levels[i])
			break;
	}

	switch (i)
	{
		case 0:
			(this->*mod_level[0])();
			break;
		case 1:
			(this->*mod_level[1])();
			break;
		case 2:
			(this->*mod_level[2])();
			break;
		case 3:
			(this->*mod_level[3])();
			break;
		default:
			std::cout << "[ Probably complaining about"
						 " insignificant problems ]" << std::endl;
			break;
	}
}
