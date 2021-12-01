/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:33:36 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/24 12:30:35 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// ################ CONSTRUCTORS

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon", 25, 5),_target("Les anglais")
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("Presidential Pardon", 25, 5), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &old) : Form(old), _target(old.getTarget())
{}

// ################# OPERATORS OVERLOAD

PresidentialPardonForm  & PresidentialPardonForm::operator=(PresidentialPardonForm const &old)
{
	(void)old;
	return (*this);
}

// ################ GETTERS

const std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

// ############### METHOD FUNCTIONS

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "Big  news ! " << this->getTarget() << " has been granted of the Presidential Pardon by Safox Beeblebrox" << std::endl;
}

// ############### DESTRUCTOR

PresidentialPardonForm::~PresidentialPardonForm()
{}
