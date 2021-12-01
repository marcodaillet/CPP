/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:33:36 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/24 12:32:20 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// ################ CONSTRUCTORS

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request", 72, 45),_target("Un chien")
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :  Form("Robotomy Request", 72, 45),  _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &old) : Form(old), _target(old.getTarget())
{}

// ################# OPERATORS OVERLOAD

RobotomyRequestForm  & RobotomyRequestForm::operator=(RobotomyRequestForm const &old)
{
	(void)old;
	return (*this);
}

// ################ GETTERS

const std::string RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

// ############### METHOD FUNCTIONS

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	srand(time(0));
	int i = (rand() % 2);
	if (i == 1)
		std::cout << "*Intense Drilling noises* : " << this->getTarget() << " has successfully been robotised" << std::endl;
	else if (i == 0)
		std::cout << "*Intense Drilling noises* : " << this->getTarget() << " has not been robotised and died during the operation RIP" << std::endl;

}

// ############### DESTRUCTOR

RobotomyRequestForm::~RobotomyRequestForm()
{}
