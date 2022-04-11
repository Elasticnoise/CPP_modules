/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:09:02 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/11 15:09:03 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm:public AForm
{
private:
	RobotomyRequestForm();
	std::string _target;
public:
	RobotomyRequestForm(std::string _target);
	RobotomyRequestForm(const RobotomyRequestForm& other);
	RobotomyRequestForm &operator =(const RobotomyRequestForm& other);
	virtual ~RobotomyRequestForm();

	void execute(Bureaucrat const & executor) const;
};

#endif