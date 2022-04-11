/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:07:50 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/11 15:07:52 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): AForm(_target, 145, 137)
{
	this->_target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other)
{
	this->_target = other._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm & ShrubberyCreationForm::operator =(const ShrubberyCreationForm& other)
{
	AForm::operator=(other);
	this->_target = other._target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream o;

	try
	{
		if (!this->getIsSigned())
			throw FormIsNotSignedException();
		else if (this->getGradeExecute() < executor.getGrade())
			throw GradeTooLowException();
		else
		{
			o.open((this->_target + "_shrubbery"));
			if (!o.is_open())
			{
				std::cerr << "File open error!" << std::endl;
				return;
			}
			else
			{
				o << "◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯" << std::endl;
				o << "◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯◯" << std::endl;
				o << "┈◯◯╰┻◯◯╋◯┻◯◯╯◯╯┈" << std::endl;
				o << "┈┈╰━┓╰━┋┗━╯┣━╯┈┈" << std::endl;
				o << "╱╲┈┈╰━┓┆┏┳━╯┈┈╱╲" << std::endl;
				o << "┈┈╱╲┈┈┃┋┋┃┈┈┈╱┈┈" << std::endl;
				o << "━━━━━━┻┻┻┻━━━━━━" << std::endl;
			}
			o.close();
		}
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}
