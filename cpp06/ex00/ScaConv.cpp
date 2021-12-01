/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScaConv.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:20:05 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/25 14:38:29 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScaConv.hpp"

Scaconv::Scaconv() {}
Scaconv::Scaconv(Scaconv const&) {}
Scaconv::~Scaconv() {}

Scaconv & Scaconv::operator=(Scaconv const &old)
{
	if (this == &old)
		return (*this);
	return (*this);
}

static int ft_strlen(std::string const &s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

float Scaconv::preTreat(const std::string &str)
{
	float ret;
	try
	{
		if (ft_strlen(str) == 3 && str[0] == '\'' && str[2] == '\'') // When input forced as a char
			return (static_cast<float>(str[1]));
		ret = std::stof(str); // Convert string to float and then we just have to cast everything else the right way
	}
	catch (std::exception &e)
	{
		throw Scaconv::WrongArgument();
	}
	return (ret);
}

char Scaconv::toChar(float f)
{
	char value = static_cast<char>(f);
	if (f == std::numeric_limits<float>::infinity() || f == -std::numeric_limits<float>::infinity() ||
		std::isnan(f)) // Conditions for -inf inf nan management
		throw std::string("impossible");
	else if (value < 32 || value > 126)
		throw std::string("Not printable");
	return (value);
}

int Scaconv::toInt(float f)
{
	int value = static_cast<int>(f);
	if (f == std::numeric_limits<float>::infinity() || f == -std::numeric_limits<float>::infinity() ||
		std::isnan(f))  // Conditions for -inf inf nan management
		throw std::string("impossible");
	return (value);
}

float Scaconv::toFloat(float f)
{
	return (static_cast<float>(f));
}

double Scaconv::toDouble(float f)
{
	return (static_cast<double>(f));
}

Scaconv::WrongArgument::WrongArgument() throw() {}
Scaconv::WrongArgument::WrongArgument(WrongArgument const &old) throw() {(void)old;}
Scaconv::WrongArgument::~WrongArgument() throw() {}

Scaconv::WrongArgument & Scaconv::WrongArgument::operator=(WrongArgument const &old) throw()
{
	if (this == &old)
		return (*this);
	return (*this);
}

const char *Scaconv::WrongArgument::what() const throw()
{
	return ("Cannot be converted or not the right format");
}


