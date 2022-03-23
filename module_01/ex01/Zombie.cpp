/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:53:50 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/23 18:05:57 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Zombie.hpp"

Zombie::Zombie () : name("Default") {};

Zombie::Zombie (std::string name)
{
	this->name = name;
};
Zombie::~Zombie() {
	std::cout << this->name << ": was deleted" << std::endl;
};

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}
