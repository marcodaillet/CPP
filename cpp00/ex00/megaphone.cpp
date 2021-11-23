/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:20:28 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/11 17:10:18 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <locale>
#include <iostream>

int	main(int ac, char **av)
{
	size_t j;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
		{
			j = 0;
			std::string str(av[i]);
			while (j < str.length())
			{
				std::cout << (char)std::toupper(str[j]);
				j++;
			}
			std::cout << std::endl;
		}
	}
	return (0);
}
