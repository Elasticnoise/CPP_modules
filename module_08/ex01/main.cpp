/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:32:45 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/22 14:32:52 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

/* Add two integers in class with size = 1 */
//	try
//	{
//		Span spShort = Span(1);
//		spShort.addNumber(16);
//		spShort.addNumber(88);
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what();
//	}

//	Span MySpan10000(10000);
//	std::srand(time(0));
//	for (int i = 0; i < 10000; i++)
//		MySpan10000.addNumber(std::rand() % 25782);
//	try
//	{
//		std::cout << MySpan10000.shortestSpan() << std::endl;
//		std::cout << MySpan10000.longestSpan() << std::endl;
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what();
//	}

	return 0;
}
