/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:38:36 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/11 22:38:40 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& other)
{
	(void) other;
}

Intern::~Intern() {}

AForm *Intern::makeForm(std::string name, std::string target)
{
	AForm *f = NULL;
	int i = 0;

	std::string	forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	while (i < 3 && forms[i] != name)
		i++;
	switch (i)
	{
		case 0:
			f = new ShrubberyCreationForm(target);
			break;
		case 1:
			f = new RobotomyRequestForm(target);
			break;
		case 2:
			f =  new PresidentialPardonForm(target);
			break;
		default:
			throw FormIsNotCreatedException();
	}
	std::cout << "Intern creates " << *f << std::endl;
	return f;
}

const char* FormIsNotCreatedException::what() const throw()
{
	return "Intern couldn't create form";
}




