/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:29:42 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/26 15:16:51 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void function(char c)
{
	std::cout << c;
}

void function2(int i)
{
	std::cout << i << " ; ";
}

void function3(char c)
{
	if (c >= 97 && c <= 122)
	{
		c = toupper(c);
		function(c);
	}
	else
		function(c);
}

int main(void)
{
	int i = 6;
	std::string array1 = "banane";
	iter(array1, i, &function);
	
	std::cout << std::endl;
	long l = 5;
	int array2[5] = {18, 322, 5323, 444, -12535};
	iter(array2, l, &function2);
	
	std::cout << std::endl;
	double b = 23;
	std::string array3 = "i am a lowercase string";
	iter(array3, b, &function3);

	return (0);
}
