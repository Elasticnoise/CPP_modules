/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:00:12 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/27 22:00:14 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

//void Harl::debug()
//{
//	std::cout << "do debug" << std::endl;
//}
//
//void Harl::info()
//{
//	std::cout << "do info" << std::endl;
//}
//
//void Harl::warning()
//{
//	std::cout << "do warning" << std::endl;
//}
//void Harl::error()
//{
//	std::cout << "do error" << std::endl;
//}

void Harl::complain(std::string level)
{
	std::string	levels[] =
	{
	"debug",
	"info",
	"warning",
	"error"
	};
	void (Harl::* mod_level[]) () =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			(this->*mod_level[i])();
	}
}

void Harl::debug()
{
	std::cout << "do debug" << std::endl;
}

void Harl::info()
{
	std::cout << "do info" << std::endl;
}

void Harl::warning()
{
	std::cout << "do warning" << std::endl;
}
void Harl::error()
{
	std::cout << "do error" << std::endl;
}
