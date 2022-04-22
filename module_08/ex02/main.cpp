/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 21:03:53 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/22 21:03:55 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
int main() {

	/* Subject's example */
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Top of stack: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "Size of stack: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);

	std::cout << "Print stack: " << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

//	MutantStack<int> secondStack;
//
//	for (int i = 0; i < 10; i++)
//		secondStack.push(i);
//	secondStack.pop();
//	secondStack.pop();
//	secondStack.pop();
//	MutantStack<int>::iterator it = secondStack.begin();
//	MutantStack<int>::iterator ite = secondStack.end();
//	while (it != ite)
//	{
//		std::cout << *it << std::endl;
//		++it;
//	}
//	return 0;
}
