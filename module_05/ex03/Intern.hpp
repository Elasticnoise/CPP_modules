/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:38:44 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/11 22:38:46 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &other);
	~Intern();

	Intern &operator =(const Intern &other);

	AForm *makeForm(std::string name, std::string target);
};

class FormIsNotCreatedException:public std::exception
{
public:
	virtual const char * what() const throw();
};

#endif

