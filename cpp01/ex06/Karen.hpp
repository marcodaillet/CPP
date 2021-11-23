/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:30:34 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/18 18:30:48 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

int convert(const std::string &str);

const std::string LEVELS[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

class Karen
{
	private:
		void (Karen::*_log_function[4])();
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		Karen(void);
		void complain(std::string level);
};
