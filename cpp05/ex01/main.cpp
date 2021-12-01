/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:59:09 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/23 17:59:22 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat esclave("Michel", 61);

	std::cout << esclave << std::endl;

	esclave.gradeUp(10);

	std::cout << esclave << std::endl;

	try
	{
		Bureaucrat test_zero("zero", 0);
	}
	catch (std::exception &e)
	{
		std::cerr << "An exception has occured : [" << e.what() << "]" << std::endl;
	}

	try
	{
		esclave.gradeDown(100);
	}
	catch (std::exception &e)
	{
		std::cerr << "An exception has occured : [" << e.what() << "]" << std::endl;
	}

	Form test("C37-e", 50, 20);

	try
	{
		esclave.signForm(test);
	}
	catch (std::exception &e)
	{
		std::cerr << "An exception has occured : [" << e.what() << "]" << std::endl;
	}

	std::cout << test << std::endl;

	esclave.gradeDown(30);

	esclave.signForm(test);
	esclave.signForm(test);

	return (0);
}
