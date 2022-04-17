/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:18:53 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/17 19:18:54 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main()
{
	Base* pointer;

	pointer = generate();
	identify(pointer);
	identify(*pointer);

	delete pointer;
	return 0;
}

