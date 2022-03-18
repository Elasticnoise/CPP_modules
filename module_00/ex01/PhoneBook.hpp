/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:05:13 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/18 21:05:15 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
public:

	PhoneBook();
	~PhoneBook();

	void    addNewContact();
	void    displayContactsList();

private:

	Contact     book[8];
	int         cid;
	int         counter;

};

#endif
