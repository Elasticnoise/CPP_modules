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
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	/* my checks */
//	Dog	dog;
//	Cat	cat;
//	std::cout << "Dog's type: "  << dog.getType() << std::endl;
//	std::cout << "Cat's type: "<< cat.getType() << std::endl;
//	dog.makeSound();
//	cat.makeSound();
	std::cout << "--------------------------" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal wrAn;
	const WrongCat	wrCat;
	const WrongAnimal* fake = new WrongAnimal();
	const WrongAnimal* fakeCat = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "--------------------------" << std::endl;
	wrAn.makeSound();
	wrCat.makeSound();
	fake->makeSound();
	fakeCat->makeSound();

	delete	meta;
	delete 	j;
	delete 	i;
	delete	fake;
	delete	fakeCat;

	return 0;
}
