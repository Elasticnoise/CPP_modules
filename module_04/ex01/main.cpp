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
	Animal *herd[10];

	for (int i = 0; i < 5; i++)
		herd[i] = new Dog();
	for (int i = 5; i < 10 ; i++)
		herd[i] =  new Cat();
	for (int i = 0; i < 10; i++)
		herd[i]->makeSound();
	for (int i = 0; i < 10; i++)
		delete herd[i];
	return 0;
}
