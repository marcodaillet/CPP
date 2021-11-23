/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:30:07 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/18 18:49:00 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Karen.hpp"

void	karenFilter(Karen karen, int lvl)
{
	switch (lvl)
	{
		case 0:
			karen.complain("DEBUG");
		case 1:
			karen.complain("INFO");
		case 2:
			karen.complain("WARNING");
		case 3:
			karen.complain("ERROR");
	}
}

int main(int ac, char **av)
{
	std::string level;
	Karen karen;
	int lvl;
	
	if (ac != 2 || (lvl = convert(av[1])) > 3)
	{
		std::cerr << "[ Probably complaining about some unsignificant problem ]" << std::endl;
		return (EXIT_FAILURE);
	}
	karenFilter(karen, lvl);
	return (EXIT_SUCCESS);
}
