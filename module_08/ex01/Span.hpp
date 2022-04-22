/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:36:15 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/22 14:36:16 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <set>

class Span
{
private:
	Span();
	unsigned int _N;
	std::set<int> _set;
public:
	Span(unsigned int N);
	Span(const Span& other);
	Span &operator =(const Span& other);
	~Span();

	void	addNumber(int num);
	int		shortestSpan();
	int		longestSpan();

	class ImpossibleToAddException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class NoValidDistanceException: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

#endif
