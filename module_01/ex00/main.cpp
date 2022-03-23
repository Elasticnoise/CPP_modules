/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:48:11 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/18 21:48:14 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include "Zombie.hpp"
int	main()
{
	Zombie *zombie = newZombie("NewZ");
	zombie->announce();
	randomChump("RandZ");
	delete zombie;
	return (1);
}
