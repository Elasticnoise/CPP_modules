/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 21:29:45 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/05 21:29:46 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
//	AAnimal An;
	AAnimal *An = new Dog();
	AAnimal *Bn = new Cat();

	An->makeSound();
	Bn->makeSound();

	delete An;
	delete Bn;
}
