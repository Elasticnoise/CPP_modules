/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:54:45 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/17 16:54:47 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <exception>
# include <string>
# include <cstdlib>
# include <limits>
# include <cmath>

class	Convert
{
private:
	double		_value;
	std::string _str;
public:
	Convert();
	Convert(std::string str);
	Convert(const Convert& other);
	Convert &operator =(const Convert& other);
	~Convert();

	int		toInt() const;
	char	toChar() const;
	float	toFloat() const;
	double	toDouble() const;
	void 	converter() const;

	double	getValue() const;
	std::string	getStr() const;

	class ImpossibleException : public std::exception
	{
	public:
		virtual const char * what() const throw();
	};

	class NonDisplayableException : public  std::exception
	{
	public:
		virtual const char * what() const throw();
	};
};
#endif
