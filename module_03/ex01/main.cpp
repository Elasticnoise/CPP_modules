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

#include "ScavTrap.hpp"


int main()
{
	ClapTrap Human("Human");
	Human.attack("Enemy");
	ScavTrap Robot("Robot");
	Robot.attack("bob");
	Robot.guardGate();
	return (0);
}
