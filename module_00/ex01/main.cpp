/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:05:23 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/18 21:05:24 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main()
{
	PhoneBook   contacts;
	std::string command;
	bool exit = false;

	std::cout << "Hi!" << std::endl;
	std::cout << std::endl << "\033[4;36mThe program accepts ADD, SEARCH and EXIT commands.\033[0m" << std::endl << std::endl;
	while (!exit)
	{
		std::cout << "\033[32mInput command: ";
		std::cin >> command;
		if (std::cin.eof())
			break;
		std::cout << "\033[0m";
		if (command == "EXIT")
			exit = true;
		else if (command == "ADD")
			contacts.addNewContact();
		else if (command == "SEARCH")
			contacts.displayContactsList();
		else
			std::cout << "Invalid input, please try again!" << std::endl;
	}
}
