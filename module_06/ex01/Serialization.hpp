/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:00:38 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/17 17:00:53 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>

struct Data
{
	int 		i;
	char		ch;
	std::string	str;
};

uintptr_t	serialize(Data*	ptr);
Data*	deserialize(uintptr_t raw);
void initStruct(Data *data);


#endif

