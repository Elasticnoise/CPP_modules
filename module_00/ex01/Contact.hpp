/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:04:52 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/18 21:04:53 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
public:

	int     index;

	Contact();
	~Contact();

	void    newContact(int cid);
	void    displayContact();
	void    displayDetailed();

private:

	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	void    alignAndTruncat(std::string text) const;

};

#endif
