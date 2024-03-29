/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:33:02 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/18 18:44:08 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int convert(const std::string &str)
{
	return (int(std::find(LEVELS, LEVELS + 4, str) - LEVELS));
}

Karen::Karen(void)
{
	this->_log_function[0] = &Karen::debug;
	this->_log_function[1] = &Karen::info;
	this->_log_function[2] = &Karen::warning;
	this->_log_function[3] = &Karen::error;
}

void Karen::complain(std::string level)
{
	int lvl = convert(level);
	if (lvl == 4)
		return ;
	(this->*_log_function[lvl])();
}

void Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}
void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
