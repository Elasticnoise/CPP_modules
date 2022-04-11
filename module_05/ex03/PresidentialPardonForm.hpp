/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:08:46 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/11 15:08:48 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "Form.hpp"

class PresidentialPardonForm:public AForm
{
private:
	std::string _target;
	PresidentialPardonForm();

public:
	PresidentialPardonForm(std::string _target);
	PresidentialPardonForm(const PresidentialPardonForm& other);
	PresidentialPardonForm &operator =(const PresidentialPardonForm &other);
	virtual ~PresidentialPardonForm();

	void execute( Bureaucrat const & executor ) const;
};

#endif
