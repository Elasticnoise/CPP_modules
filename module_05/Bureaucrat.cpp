/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:54:37 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/07 22:54:38 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string _name, unsigned int _grade)
{

}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	*other = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	this->_name = other._name;
	this->_grade = other._grade;

	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat, Destructor called" << std::endl;
}

Bureaucrat::GradeTooHighException

std::ostream  & operator <<(std::ostream & o, Bureaucrat const & other)
{
	o << other.getName() << ", bureaucrat grade "<< other.getGrade() <<std::endl;
	return o;
}
