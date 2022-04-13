/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:25:51 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/08 21:25:53 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern	someRandomIntern;
	AForm*	rrf = NULL;

	try
	{
		std::cout << "NoNameForm" << std::endl;
		rrf = someRandomIntern.makeForm("shrubbery creation", "target");
		std::cout << *rrf << std::endl << std::endl;
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	delete rrf;
	return 0;
}