/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 20:45:59 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/18 20:46:00 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<class T>
class Array
{
private:
	unsigned int	_size;
	T*				_array;
public:
	Array(): _size(0)
	{
		_array = nullptr;
	}
	Array(unsigned int n): _size(n)
	{
		if (_size > 0)
			_array = new T[_size];
		else
			_array = nullptr;
	}
	Array(const Array& other)
	{
		this->_size = other.size;
		if (this->_size > 0)
		{
			this->_array = new T[this->_size];
			for (int i = 0; i < this->_size; i++)
				this->_array[i] = other._array[i];
		}
		else
			this->_array = nullptr;
	}
	Array &operator =(const Array& other)
	{
		if (this == &other)
			return *this;
		if (this->_size != 0)
			delete[] this->_array;
		this->_size = other._size;
		if (this->_size > 0)
		{
			this->_array = new T[this->_size];
			for (int i = 0; i < this->_size; i++)
				this->_array[i] = other._array[i];
		}
		else
			this->_array = nullptr;
		return *this;
	}
	virtual ~Array()
	{
		delete[] _array;
		_array = nullptr;
		_size = 0;
	}

	int getSize()
	{
		return _size;
	}

	T &operator[](size_t index)
	{
		if (index >= this->_size)
			throw IndexIsOutOfRange();
		return this->_array[index];
	}

	class IndexIsOutOfRange: public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Index is out of range";
		}
	};
};

#endif
