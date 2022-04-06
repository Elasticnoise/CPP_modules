/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:44:44 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/06 12:44:45 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "Animal.hpp"

class WrongCat: public Animal
{
public:
	WrongCat();
	WrongCat(const WrongCat &other);
	WrongCat & operator =(const WrongCat &other);
	~WrongCat();

//	void makeSound() const;
//	std::string	getType() const;
};

#endif
