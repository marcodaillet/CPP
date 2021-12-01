/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScaConv.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:54:04 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/25 14:09:23 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCACONV_HPP
#define SCACONV_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cmath>

class Scaconv;

class Scaconv
{
	public:
		Scaconv();
		Scaconv(const Scaconv &old);
		Scaconv & operator=(const Scaconv &old);
		virtual ~Scaconv();

		float preTreat(std::string const & str);
		char toChar(float);
		int toInt(float);
		float toFloat(float);
		double toDouble(float);

		class WrongArgument : public std::exception // Exception class is inheriting from std::exception
		{
			public:
				WrongArgument() throw();
				WrongArgument(const WrongArgument &) throw();
				WrongArgument & operator=(const WrongArgument &old) throw();
				virtual ~WrongArgument() throw();
				virtual const char* what() const throw(); // It returns a null terminated character sequence that may be used to identify the exception.
		};
};

#endif
