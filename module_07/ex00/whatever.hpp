#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>


template<typename T>
T	min(T arg_1, T arg_2)
{
	if (arg_1 < arg_2)
		return arg_1;
	else
		return arg_2;
}
template<typename T>
T	max(T arg_1, T arg_2)
{
	if (arg_1 > arg_2)
		return arg_1;
	else
		return arg_2;
}

template<typename T>
void swap(T& arg_1, T& arg_2)
{
	T tmp;
	tmp = arg_2;
	arg_2 = arg_1;
	arg_1 = tmp;
}



#endif