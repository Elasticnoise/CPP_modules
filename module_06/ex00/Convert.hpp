#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>

class	Convert
{
private:
	std::string _str;
public:
	Convert();
	Convert(std::string str);
	Convert(const Convert& other);
	Convert &operator =(const Convert& other);
	~Convert();

	int		toInt();
	char	toChar();
	bool	toFloat();
	double	toDouble();

};
#endif