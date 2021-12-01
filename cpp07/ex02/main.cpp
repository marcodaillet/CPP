/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:29:42 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/27 16:38:44 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int> a1;
	Array<std::string> a2(4);
	a2[0] = "Je";
	a2[1] = "suis";
	a2[2] = "une";
	a2[3] = "banane";
	std::cout << "Assignment of a sentence into an array of type string" << std::endl;
	for (int i = 0; i < a2.size(); i++)
		std::cout << a2[i] << " ";
	std::cout << std::endl;
	std::cout << "Assignment of a numbers list into an array of type int" << std::endl;
	Array<int> a3(10);
	srand(time(0));
	for (int j = 0; j < a3.size(); j++)
	{	
		a3[j] = (rand() % 100);
		std::cout << a3[j] << " ";
	}
	std::cout << std::endl;
	std::cout << "Trying the out of bounds exception" << std::endl;
	try
	{
		a3[11] = 1;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Trying the constructors by copy and by '=' operator" << std::endl;
	Array<std::string> a4(a2);
	Array<int> a5 = a3;
	std::cout << "String array : ";
	for (int h = 0; h < a4.size(); h++)
		std::cout << a4[h] << " ";
	std::cout << std::endl;
	std::cout << "Int array : ";
	for (int j = 0; j < a5.size(); j++)
		std::cout << a5[j] << " ";
	std::cout << std::endl;
	std::cout << "Checkin that it didnt change first arrays" << std::endl;
	std::cout << "Original string array : ";
	for (int z = 0; z < a2.size(); z++)
		std::cout << a2[z] << " ";
	std::cout << std::endl << "Original int array : ";
	for (int q = 0; q < a3.size(); q++)
		std::cout << a3[q] << " ";
	return (0);
}
