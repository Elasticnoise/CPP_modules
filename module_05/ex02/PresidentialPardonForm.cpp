/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:08:41 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/11 15:08:42 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm(target, 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other), _target(other._target)
{}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm & PresidentialPardonForm::operator =(const PresidentialPardonForm& other)
{
	AForm::operator=(other);
	this->_target = other._target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (!this->getIsSigned() )
			throw FormIsNotSignedException();
		else if ( this->getGradeExecute() < executor.getGrade() )
			throw GradeTooLowException();
		else
			std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
}
