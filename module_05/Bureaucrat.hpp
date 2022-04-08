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

	std::string	const _name;
	unsigned int _grade;
public:

	Bureaucrat(std::string _name, unsigned int _grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat &operator =(const Bureaucrat& other);
	~Bureaucrat();

	void getName() const;
	void getGrade() const;
	void upGrade();
	void downGrade();
	class GradeTooHighException : public std::exception
	class GradeTooLowException : public std::exception
};

std::ostream & operator <<(std::ostream &o, Bureaucrat const & other);

#endif
