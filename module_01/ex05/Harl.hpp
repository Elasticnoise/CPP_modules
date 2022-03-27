/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lechalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:00:02 by lechalme          #+#    #+#             */
/*   Updated: 2022/03/27 22:00:03 by lechalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

class	Harl
{
private:
	void debug();
	void info();
	void warning();
	void error();

public:
	Harl();
	~Harl();
	void	complain(std::string level);
};

#endif
