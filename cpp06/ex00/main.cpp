/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:29:42 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/25 14:08:49 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScaConv.hpp"

int main(int ac, char **av)
{
	std::string str;
	float	to_conv;
	Scaconv conv;
	
	if (ac != 2)
	{
		std::cerr << "Wrong number of argument" << std::endl;
		return (1);
	}
	str = av[1];
	try
	{
		to_conv = conv.preTreat(str);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
		return (1);
	}
	try
	{
		char c = conv.toChar(to_conv);
		std::cout << "char : '" << c << "'" << std::endl;
	}
	catch (std::string &e)
	{
		std::cout << "char : " << e << std::endl;
	}
	try
	{
		std::cout << "int : " << conv.toInt(to_conv) << std::endl;
	}
	catch (std::string &e)
	{
		std::cout << e << "patate"<< std::endl;
	}

	float f = conv.toFloat(to_conv);
	if (f - (int)f != (float)0)
		std::cout << "float : " << f << "f" << std::endl;
	else
		std::cout << "float : " << f << ".0f" << std::endl;

	double d = conv.toDouble(to_conv);
	if (d - (int)d == (double)0)
		std::cout << "double : " << d << ".0" << std::endl;
	else
		std::cout << "double : " << d << std::endl;
	return (0);
}
