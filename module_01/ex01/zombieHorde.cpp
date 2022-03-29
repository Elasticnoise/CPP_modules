/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:50:21 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/29 15:50:22 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombies[i].setName(name);
	return (zombies);
}
