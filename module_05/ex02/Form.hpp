/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:14:04 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/09 14:14:05 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class AForm
{
private:
	const std::string _name;
	bool _is_signed;
	const int _gradeSign;
	const int _gradeExecute;
	AForm();

public:
	AForm(const std::string _name, const int _gradeSign, const int _gradeExecute);
	AForm(const AForm& other);
	AForm &operator =(const AForm& other);
	~AForm();

	std::string getName() const;
	bool getIsSigned() const;
	int getGradeSign() const;
	int getGradeExecute() const;
	void beSigned(Bureaucrat& bur);
	virtual void execute(Bureaucrat const & executor) const = 0;

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
	class FormIsNotSignedException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

std::ostream & operator <<(std::ostream &o, AForm const & other);

#endif
