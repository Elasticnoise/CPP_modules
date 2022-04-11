/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:25:51 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/08 21:25:53 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	/* Subject check 1 */
//	Bureaucrat bob("bob", 151);
//	std::cout << bob;
//	Form	form("form", 1, 10);
//	std::cout << form;

	/* Subject check 2 */
//	Form	form("form", 1, 10);
//	Bureaucrat bob("bob", 1);
//	bob.signForm(form);
//	std::cout << form;

/* Subject check 3 */
	Form form("form", 3, 3);
	Bureaucrat bob("bob", 4);
//	std::cout << bob;
	form.beSigned(bob);
	std::cout << form;

	return 0;
}
