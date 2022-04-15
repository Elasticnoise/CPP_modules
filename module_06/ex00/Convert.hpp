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
