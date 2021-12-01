/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:29:42 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/28 14:53:10 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void )
{
	std::vector<int> vec;

	vec.push_back(10);
	vec.push_back(-1);
	vec.push_back(384346);
	vec.push_back(-843);
	vec.push_back(1324);
	vec.push_back(5);
	vec.push_back(323);

	std::cout << "Manually printing the vector to have a reference : ";
	for (int i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " / ";
	std::cout << std::endl;
	std::vector<int>::iterator it = easyfind(vec, 5);
	std::cout << "Looking for 5 in the vector : " << *it << std::endl;
	std::cout << "Number before 5 in vector : " << *(it - 1) << std::endl;
	std::cout << "Number after 5 in vector : " << *(it + 1) << std::endl;
	
	std::cout << "Now trying to throw an error by searching 0 in our vector" << std::endl;
	try
	{
		std::vector<int>::iterator it2 = easyfind(vec, 0);
		std::cout << *it2 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Iterator Exception : " << e.what() << std::endl;
	}
	return (0);
}
