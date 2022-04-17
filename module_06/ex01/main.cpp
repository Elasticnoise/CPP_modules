/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:00:02 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/17 17:00:04 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
	Data	data;
	Data*	ptr;
	Data*	des_ptr;
	uintptr_t	raw;

	ptr = &data;
	initStruct(&data);

	std::cout << "Raw structure" << std::endl;
	std::cout << ptr->i << std::endl;
	std::cout << ptr->ch << std::endl;
	std::cout << ptr->str << std::endl << std::endl;
	raw = serialize(ptr);
	des_ptr = deserialize(raw);
	std::cout << "After using serialize and deserialize" << std::endl;
	std::cout << des_ptr->i << std::endl;
	std::cout << des_ptr->ch << std::endl;
	std::cout << des_ptr->str << std::endl << std::endl;
	std::cout << "Compare two pointers" << std::endl;
	std::cout << ptr << std::endl;
	std::cout << des_ptr << std::endl;

	return 0;
}

