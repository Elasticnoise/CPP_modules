/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:59:50 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/27 21:59:51 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl har;

	har.complain("debug");
	har.complain("info");
	har.complain("warning");
	har.complain("error");
	return (0);
}
