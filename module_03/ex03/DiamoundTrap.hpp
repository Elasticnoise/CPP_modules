/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamoundTrap.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 23:23:22 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/03 23:23:24 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOUNDTRAP_HPP
#define DIAMOUNDTRAP_HPP


class DiamoundTrap
{
private:
	std::string _name;
	DiamoundTrap();
public:
	DiamoundTrap(std::string name);
	DiamoundTrap(const DiamoundTrap & other);
	DiamoundTrap & operator =(const DiamoundTrap &other);
	~DiamoundTrap();
};
#endif
