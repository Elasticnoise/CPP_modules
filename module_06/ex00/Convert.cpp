/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:54:39 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/17 16:54:41 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() {}
Convert::Convert(std::string _str) : _value(std::strtod(_str.c_str(), nullptr)), _str(_str) {}
Convert::Convert(const Convert &other)
{
	*this = other;
}
Convert &Convert::operator =(const Convert &other)
{
	this->_value = other._value;
	this->_str = other._str;

	return (*this);
}
Convert::~Convert() {}

double	Convert::getValue() const
{
	return this->_value;
}

std::string Convert::getStr() const
{
	return this->_str;
}
int Convert::toInt() const
{
	int num = static_cast<int>(getValue());
	if (_str.size() == 3 && _str[0] == '\'' && _str[2] == '\'')
		return static_cast<int>(_str[1]);
	if (_value == std::numeric_limits<double>::infinity() || _value == -std::numeric_limits<double>::infinity() || std::isnan(_value))
		throw ImpossibleException();

	return num;
}

char Convert::toChar() const
{
	char ch = static_cast<char>(getValue());

	if (_str.size() == 3 && _str[0] == '\'' && _str[2] == '\'')
			return _str[1];
	else if (ch == std::numeric_limits<double>::infinity() || ch == -std::numeric_limits<double>::infinity() || std::isnan(ch))
		throw Convert::ImpossibleException();
	else if (!(std::isprint(ch)))
		throw Convert::NonDisplayableException();
	return ch;
}

float Convert::toFloat() const
{
	float fl_num = static_cast<float>(getValue());
	if (_str.size() == 3 && _str[0] == '\'' && _str[2] == '\'')
		return static_cast<float>(_str[1]);
	return fl_num;
}

double Convert::toDouble() const
{
	double dl = static_cast<double>(getValue());

	if (_str.size() == 3 && _str[0] == '\'' && _str[2] == '\'')
		return static_cast<double>(_str[1]);
	return dl;
}

void Convert::converter() const
{
	char	ch;
	int		num;
	float	fl;
	double	dl;

	try
	{
		ch = this->toChar();
		std::cout << "char: " << ch << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << "char: " << ex.what() << std::endl;
	}
	try
	{
		num = this->toInt();
		std::cout << "int: " << num << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << "int: " << ex.what() << std::endl;
	}
	try
	{
		fl = this->toFloat();
		std::cout <<"float: " << fl;
		if (fl - static_cast<int>(fl) == 0)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << "float: " << ex.what() << std::endl;
	}
	try
	{
		dl = this->toDouble();
		std::cout << "double: " << dl;
		if (dl - static_cast<int>(dl) == 0)
			std::cout << ".0" << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << "double: " << ex.what() << std::endl;
	}
}

const char *Convert::NonDisplayableException::what() const throw()
{
	return ("Non displayable");
}

const char *Convert::ImpossibleException::what() const throw()
{
	return ("Impossible");
}
