/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:33:36 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/24 13:26:36 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// ################ CONSTRUCTORS

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery creation", 145, 137),_target("Maison")
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("Shrubbery creation", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &old) : Form(old), _target(old.getTarget())
{}

// ################# OPERATORS OVERLOAD

ShrubberyCreationForm  & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &old)
{
	(void)old;
	return (*this);
}

// ################ GETTERS

const std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

// ############### METHOD FUNCTIONS

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::ofstream outfile (this->getTarget() + "_shrubbery");
	outfile << "                  _______________________________________________________ " << std::endl;
	outfile << "                  |                                                      |" << std::endl; 
	outfile << "             /    |                                                      |" << std::endl;
    outfile << "            /---, |                                                      |" << std::endl;
    outfile << "       -----# ==| |                                                      |" << std::endl;
    outfile << "       | :) # ==| |                                                      |" << std::endl;
	outfile << "  -----'----#   | |______________________________________________________|" << std::endl;
	outfile << "  |)___()  '#   |______====_________________________________________|	" << std::endl;	
	outfile << " [_/,-,\"--------- //,-,  ,-,      |/             //,-,  ,-,  ,-,__ __#	" << std::endl;
	outfile << "   ( 0 )|===******||( 0 )( 0 )||-  o              '( 0 )( 0 )( 0 )||		" << std::endl;
	outfile << "----'-'--------------'-'--'-'-----------------------'-'--'-'--'-'-------------- " << std::endl;
	outfile.close();
}

// ############### DESTRUCTOR

ShrubberyCreationForm::~ShrubberyCreationForm()
{}
