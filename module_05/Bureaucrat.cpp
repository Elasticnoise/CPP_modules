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

Bureaucrat::Bureaucrat(const std::string &_name, unsigned int _grade):_name(_name)
{
//	this->_name = _name;
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
	else
		this->_grade = _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	*this = other;
}

Bureaucrat &Bureaucrat::operator =(const Bureaucrat& other)
{
	this->_grade = other._grade;
	return *this;
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

unsigned int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void Bureaucrat::downGrade()
{
	if (this->_grade == 1)
		throw GradeTooLowException();
	this->_grade++;
}

void Bureaucrat::upGrade()
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade--;
}

Bureaucrat::~Bureaucrat()
{
//	std::cout << "Bureaucrat, Destructor called" << std::endl;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

std::ostream  & operator <<(std::ostream & o, Bureaucrat const & other)
{
	o << other.getName() << ", bureaucrat grade "<< other.getGrade() <<std::endl;
	return o;
}
