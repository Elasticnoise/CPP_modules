/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:06:15 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/23 18:06:17 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
# include <iostream>

void	randomChump(std::string name)
{
	Zombie newBorn;

	newBorn.setName(name);
	newBorn.announce();
}
