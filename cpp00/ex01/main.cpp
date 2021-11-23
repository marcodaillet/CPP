/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:15:06 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/15 12:22:30 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myapb.hpp"
#include "contact.hpp"
#include <iostream>
#include <string>
#include <locale>

int main()
{
	myapb pb;
	std::string cmd = "";
	while (cmd != "EXIT")
	{
		std::cout << "Enter a command : ";
		std::getline(std::cin, cmd);
		if (cmd == "SEARCH")
			pb.ft_search();
		else if (cmd == "ADD")
			pb.ft_add();
	}
	return (0);
}
