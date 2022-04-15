#include "Convert.hpp"

Convert::Convert() {}
Convert::Convert(std::string _str) : _str(_str) {}
Convert::Convert(const Convert &other)
{
	*this = other;
}
Convert &Convert::operator =(const Convert &other)
{
	this->_str = other._str;

	return (*this);
}
Convert::~Convert() {}

int Convert::toInt() const
{
	int num = 0;

	try
	{
		num = static_cast<int>(std::stoi(this->_str));
	}
	catch (std::exception &ex)
	{
		throw Convert::ImpossibleException();
	}
	return num;
}

char Convert::toChar() const
{
	char ch = static_cast<char>(std::strtod(_str.c_str(), nullptr));

	if (_str.size() == 3)
			return _str[1];
	else if (ch == std::numeric_limits<double>::infinity() || ch == -std::numeric_limits<double>::infinity() || std::isnan(ch))
		throw Convert::ImpossibleException();
	else if (!(std::isprint(ch)))
		throw Convert::NonDisplayableException();
	return ch;
}

float Convert::toFloat() const
{
	float fl = 0;

	try
	{
		fl = std::stof(this->_str);
	}
	catch (std::exception& ex)
	{
		throw Convert::ImpossibleException();
	}
	return fl;
}

double Convert::toDouble() const
{
	double dl = 0;

	try
	{
		dl = std::stod(this->_str);
	}
	catch (std::exception& ex)
	{
		throw Convert::ImpossibleException();
	}
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