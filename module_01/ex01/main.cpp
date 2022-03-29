/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:50:11 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/29 15:50:13 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Zombie.hpp"

int	main()
{
	Zombie* horde;
	horde = zombieHorde(7, "Slava");
	for (int i = 0; i < 7; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
