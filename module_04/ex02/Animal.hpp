/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:46:09 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/05 19:46:11 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
protected:
	std::string type;
public:
	AAnimal();
	AAnimal(const AAnimal &other);
	AAnimal & operator =(const AAnimal &other);
	virtual ~AAnimal();

	virtual void	makeSound() const = 0;
	virtual std::string getType() const = 0;
};

#endif