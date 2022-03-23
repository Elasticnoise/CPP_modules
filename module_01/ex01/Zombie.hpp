/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:54:46 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/18 21:54:49 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
private:
	std::string name;
public:
	Zombie (std::string name);
	Zombie ();
	~Zombie();

	void	setName(std::string name);
	void	announce();
};
	void randomChump(std::string name);
	Zombie* newZombie(std::string name);
	Zombie* zombieHorde(int N, std::string name);
#endif
