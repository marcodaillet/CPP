/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:30:07 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/18 17:28:36 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void	ft_replace(std::string &data, std::string &s1, std::string &s2)
{
	size_t cursor;

	cursor = 0;
	if (s1.empty())
		return ;
	while (cursor != data.npos)
	{
		cursor = data.find(s1, cursor);
		if (cursor != data.npos)
		{
			data.erase(cursor, s1.length());
			data.insert(cursor, s2);
			cursor += s2.length();
		}
	}
}

int main(int ac, char **av)
{
	std::string filename;
	std::string s1;
	std::string s2;
	std::string data;
	if (ac != 4)
	{
		std::cout << "Wrong arguments. Use : ./replace filename string1 string2" << std::endl;
		return (EXIT_FAILURE);
	}
	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	std::ifstream file;
	std::ofstream replace_file;
	file.open(filename, std::ios::in);
	if (file.is_open())
		replace_file.open(filename + ".replace", std::ios::out | std::ios::trunc);
	if (replace_file.is_open() && file.is_open())
	{
		std::ostringstream os;
		os << file.rdbuf();
		file.close();
		data = os.str();
		ft_replace(data, s1, s2);
		replace_file << data;
		replace_file.close();
		std::cout << "Successfully replaced the string and stored the new data in " << filename + ".replace" << std::endl;
		return (EXIT_SUCCESS);
	}
	else if (file.is_open())
		std::cerr << "Couldnt open " << filename << std::endl;
	else
		std::cerr << "Couldnt create a file " << filename << ".replace" << std::endl;
	return (EXIT_FAILURE);
}
