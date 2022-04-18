/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:00:29 by lechalme          #+#    #+#             */
/*   Updated: 2022/04/18 17:00:31 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
//	int array_int[] = {1, 2, 3, 4, 5};
	char str[] = "DahkSknh`";

//	iter(array_int, 4, my_print);
	iter(str, 9, increment);
	iter(str, 9, my_print);
	return 0;
}
