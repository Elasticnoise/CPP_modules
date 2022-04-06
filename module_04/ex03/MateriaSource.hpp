/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:43:19 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/06 21:43:21 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria *) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource:public IMateriaSource
{
private:
	AMateria* inventory[4];
public:
	MateriaSource();
	MateriaSource(std::string const & type);
	MateriaSource(const MateriaSource &other);
	MateriaSource &operator =(const MateriaSource & other);
	~MateriaSource();

	void learnMateria(AMateria *);
	AMateria* createMateria(std::string const & type);
};

#endif
