/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:07:56 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/11 15:07:58 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public AForm
{

private:
	std::string	_target;
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string _target);
	ShrubberyCreationForm(const ShrubberyCreationForm& other);
	~ShrubberyCreationForm();

	ShrubberyCreationForm & operator =( ShrubberyCreationForm const & other);
	void execute(Bureaucrat const & executor) const;
};

std::ostream & operator <<(std::ostream &o, AForm const & other);




#endif
