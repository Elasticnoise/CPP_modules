/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:00:44 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/17 17:00:46 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	raw;

	raw = reinterpret_cast<uintptr_t>(ptr);

	return raw;
}

Data*	deserialize(uintptr_t raw)
{
	Data*		ptr;

	ptr = reinterpret_cast<Data*>(raw);

	return ptr;
}

void initStruct(Data* data)
{
	data->i = 16;
	data->ch = 'A';
	data->str = "I am String";
}
