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

//Cat cat;
//Cat cat2 = cat;
//
//cat.makeSound();
//cat2.makeSound();

//	Animal* cat = new Cat();
//	Cat* fake_cat = cat;

// Checklist test
//	Cat cat;
//	{
//		Cat fake_cat = cat;
//		std::cout << "ad :"<< fake_cat.brain << std::endl;
//		std::cout << "ad :"<< cat.brain << std::endl;
//	}
//	std::cout << "ad :"<< cat.brain << std::endl;
//	std::cout << "ad :"<< fake_cat.brain << std::endl;
//	cat.makeSound();
//	fake_cat.makeSound();


//  subject main example

//	Animal *herd[10];
//
//	for (int i = 0; i < 5; i++)
//		herd[i] = new Dog();
//	for (int i = 5; i < 10 ; i++)
//		herd[i] =  new Cat();
//	for (int i = 0; i < 10; i++)
//		herd[i]->makeSound();
//	for (int i = 0; i < 10; i++)
//		delete herd[i];


	Dog a;
	Dog b(a);
	Cat c;
	Cat d(c);

	a = b;
	c = d;
	return 0;
}
