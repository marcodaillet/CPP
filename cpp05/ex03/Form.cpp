/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:33:36 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/24 12:29:22 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// ################ CONSTRUCTORS

Form::Form() : _name("A28-c"), _lvlToSign(50), _lvlToExe(30), _signed(false)
{}

Form::Form(const std::string name, unsigned int lvlToSign, unsigned int lvlToExe) : _name(name), _lvlToSign(lvlToSign), _lvlToExe(lvlToExe)
{
	if (lvlToSign < lvlToExe)
		throw Form::GradeTooHighException();
	if (lvlToSign < 1)
		throw Form::GradeTooHighException();
	else if (lvlToSign > 150)
		throw Form::GradeTooLowException();
	if (lvlToExe < 1)
		 throw Form::GradeTooHighException();
	else if (lvlToExe > 150)
		throw Form::GradeTooLowException();
	this->_signed = false;
}

Form::Form(Form const &old) : _name(old.getName()), _lvlToSign(old.getLvlToSign()), _lvlToExe(old.getLvlToExe()), _signed(old.isSigned())
{
	if (old.getLvlToSign() < old.getLvlToExe())
		throw Form::GradeTooHighException();
	if (old.getLvlToSign() < 1)
		throw Form::GradeTooHighException();
	else if (old.getLvlToSign() > 150)
		throw Form::GradeTooLowException();
	if (old.getLvlToExe() < 1)
		throw Form::GradeTooHighException();
	else if (old.getLvlToExe() > 150)
		throw Form::GradeTooLowException();
}

// ################# OPERATORS OVERLOAD

Form  & Form::operator=(Form const &old)
{
	this->_signed = old.isSigned();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Form const &in)
{
	if (in.isSigned())
		out << "the form " << in.getName() << " is signed, level to sign : " << in.getLvlToSign() << ", level to execute : " << in.getLvlToExe() << "." << std::endl;
	else
		out << "the form " << in.getName() << " is not signed, level to sign : " << in.getLvlToSign() << ", level to execute : " << in.    getLvlToExe() << "." << std::endl;
	return (out);
}

// ################ GETTERS

std::string Form::getName() const
{
	return (this->_name);
}

unsigned int Form::getLvlToExe() const
{
	return (this->_lvlToExe);
}

unsigned int Form::getLvlToSign() const
{
	return (this->_lvlToSign);
}

bool Form::isSigned() const
{
	return (this->_signed);
}

// ############### METHOD FUNCTIONS

Form& Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_lvlToSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
	return (*this);
}

void Form::execute(Bureaucrat const &executor) const
{
	if (!this->isSigned())
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getLvlToExe())
		throw Form::GradeTooLowException();
}


// ############### DESTRUCTOR

Form::~Form()
{}
