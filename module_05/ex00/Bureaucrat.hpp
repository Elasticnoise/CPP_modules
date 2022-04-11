/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:55:04 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/07 22:55:10 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	Bureaucrat();

	const std::string	_name;
	unsigned int		_grade;
public:

	Bureaucrat(const std::string &_name, unsigned int _grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat &operator =(const Bureaucrat& other);
	~Bureaucrat();

	std::string getName() const;
	unsigned int getGrade() const;
	void upGrade();
	void downGrade();
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

std::ostream & operator <<(std::ostream &o, Bureaucrat const & other);

#endif
