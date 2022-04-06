/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:40:50 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/06 18:40:52 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria
{
private:
	std::string type;
public:
	Ice();
	Ice(const Ice &other);
	Ice &operator =(const Ice & other);
	~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif

