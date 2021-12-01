/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:59:09 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/24 14:33:59 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main(void)
{
	std::cout << "----------PART ONE-----------" << std::endl;

	Bureaucrat esclave("Michel", 61);
	std::cout << esclave;
	esclave.gradeUp(10);
	std::cout << esclave;
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
	std::cout << esclave.getName() << " grade down 30" << std::endl;
	esclave.gradeDown(30);
	try
	{
		esclave.signForm(test);
	}
	catch (std::exception &e)
	{
		std::cerr << "An exception has occured : [" << e.what() << "]" << std::endl;
	}

	std::cout << std::endl << std::endl;
	std::cout << "----------PART TWO-----------" << std::endl << std::endl;
	
	ShrubberyCreationForm shrubberyCreationForm("Maison");
	std::cout << shrubberyCreationForm;
	esclave.signForm(shrubberyCreationForm);
	esclave.executeForm(shrubberyCreationForm);
	shrubberyCreationForm.execute(esclave);
	std::cout << shrubberyCreationForm << std::endl;

	RobotomyRequestForm robotomyRequestForm("Un petit chien");
	std::cout << esclave;
	std::cout << robotomyRequestForm;
	try
	{
		esclave.signForm(robotomyRequestForm);
	}
	catch (std::exception &e)
	{
		std::cerr << "An exception has occured : [" << e.what() << "]" << std::endl;
	}
	std::cout << robotomyRequestForm;
	std::cout << esclave.getName() << " grade up 50" << std::endl;
	esclave.gradeUp(50);
	try
	{
		esclave.signForm(robotomyRequestForm);
	}
	catch (std::exception &e)
	{
		std::cerr << "An exception has occured : [" << e.what() << "]" << std::endl;
	}
	std::cout << esclave;
	std::cout << robotomyRequestForm;
	try
	{
		esclave.executeForm(robotomyRequestForm);
		robotomyRequestForm.execute(esclave);
	}
	catch (std::exception &e)
	{
		std::cerr << "An exception has occured : [" << e.what() << "]" << std::endl;
	}

	 std::cout << std::endl << std::endl;
	 std::cout << "----------PART THREE-----------" << std::endl << std::endl;

	 Intern intern;
	 intern.makeForm("Presidential Pardon", "Someone");
	 try
	 {
		 intern.makeForm("Presidential AntiPardon", "Someone");
	 }
	 catch (std::exception &e)
	 {
		 std::cerr << "An exception occured : [" << e.what() << "]" << std::endl;
	}
	return (0);
}
