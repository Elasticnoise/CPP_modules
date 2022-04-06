/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:41:05 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/06 18:41:06 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure:public AMateria
{
private:
	std::string type;
public:
	Cure();
	Cure(const Cure &other);
	Cure &operator =(const Cure & other);
	~Cure();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
