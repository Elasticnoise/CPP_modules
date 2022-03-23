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
	Zombie (std::string name)
	{
		this->name = name;
	};
	Zombie () {};
	~Zombie() {
		std::cout << name << ": was deleted" << std::endl;
	};

	void	setName(std::string name)
	{
		this->name = name;
	}
	void	announce();
};
	void randomChump(std::string name);
	Zombie* newZombie(std::string name);
#endif
