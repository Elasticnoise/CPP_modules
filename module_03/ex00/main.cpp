/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:01:24 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/03 17:01:26 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap tom("Tom");
	ClapTrap bill("Bill");

//	tom.attack(bill.getName());
//	tom.attack(bill.getName());
//	tom.attack(bill.getName());
//	tom.attack(bill.getName());
//	tom.attack(bill.getName());
//	tom.attack(bill.getName());
//	tom.attack(bill.getName());
//	tom.attack(bill.getName());
//	tom.attack(bill.getName());

	bill.takeDamage(5);
	bill.beRepaired(2);
//	tom.attack(bill.getName());

	std::cout << "-----------------------" << std::endl;
	std::cout << tom << std::endl;
	std::cout << bill << std::endl;

	return (0);
}
