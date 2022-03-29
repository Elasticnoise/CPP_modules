/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:48:52 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/29 15:48:54 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
class HumanB
{
private:
	std::string name;
	const Weapon* weapon;
public:
	HumanB(std::string const name);
	~HumanB();
	void attack() const;
	void setWeapon(const Weapon &type);
};
#endif
