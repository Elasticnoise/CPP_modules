/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:13:58 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/09 14:14:00 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class Bureaucrat;

Form::Form(std::string _name, const int _gradeSign, const int _gradeExecute): _name(_name), _is_signed(false), _gradeSign(_gradeSign), _gradeExecute(_gradeExecute)
{
	try
	{
		if (_gradeSign < 1 || _gradeExecute < 1)
			throw GradeTooHighException();
		else if (_gradeSign > 150 || _gradeExecute > 150)
			throw GradeTooLowException();
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}

Form::Form(const Form &other): _name(other._name), _is_signed(other._is_signed), _gradeSign(other._gradeSign), _gradeExecute(other._gradeExecute)
{
	*this = other;
}

Form &Form::operator =(const Form& other)
{
	this->_is_signed = other._is_signed;
	return *this;
}

std::string Form::getName() const
{
	return this->_name;
}

bool Form::getIsSigned() const
{
	return this->_is_signed;
}

int Form::getGradeSign() const
{
	return this->_gradeSign;
}

int Form::getGradeExecute() const
{
	return this->_gradeExecute;
}

void Form::beSigned(Bureaucrat& bur)
{
	try
	{
		if (bur.getGrade() > _gradeSign || bur.getGrade() == 0)
			throw GradeTooLowException();
		this->_is_signed = true;
		std::cout<<"bureaucrat:"<<bur<<" signed"<<std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout<< ex.what() <<std::endl;
	}
}

Form::~Form()
{
//	std::cout << "Bureaucrat, Destructor called" << std::endl;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

std::ostream & operator <<(std::ostream &o, Form const & other)
{
	o <<"Form: " << other.getName();
	if (other.getIsSigned())
		o << "- is signed" <<std::endl;
	else
		o << " couldn’t sign" <<std::endl;
	std::cout<<"Grade sign: "<<other.getGradeSign()<<std::endl;
	std::cout<<"Grade execute: "<< other.getGradeExecute()<<std::endl;

	return o;
}
