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

int Convert::toInt()
{
	int num = static_cast<int>(this->_str);


	return num;
}

char Convert::toChar()
{
	char ch;

	return ch;
}

bool Convert::toFloat()
{
	float fl;

	return fl;
}

double Convert::toDouble()
{
	double dl;

	return dl;
}