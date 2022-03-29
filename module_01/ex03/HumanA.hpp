/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:48:39 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/29 15:48:41 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
class HumanA
{
private:
	std::string name;
	Weapon& weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack() const;
};

#endif
