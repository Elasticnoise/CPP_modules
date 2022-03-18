/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:26:54 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/18 22:26:56 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include <iostream>
#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* newBorn = new Zombie(name);
	return (newBorn);
}
