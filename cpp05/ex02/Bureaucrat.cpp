/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:33:36 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/24 12:31:40 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// ############### CONSTRUCTOR

Bureaucrat::Bureaucrat() : _name("Jean-Jacques"), _grade(4)
{}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &old) : _name(old.getName())
{
	if (old.getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (old.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = old.getGrade();
}

// ############### OPERATORS OVERLOAD

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &old)
{
	if (this != &old)
	{
		this->_grade = old.getGrade();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &in)
{
	out << in.getName() << ", bureaucrat grade : " << in.getGrade() << "." << std::endl;
	return (out);
} 

// ############### GETTERS

const std::string &Bureaucrat::getName() const
{
	return (this->_name);
}

unsigned int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

// ############### METHOD FUNCTIONS

void Bureaucrat::gradeUp(int i)
{
    if (this->_grade - i < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->_grade - i > 150)
        throw Bureaucrat::GradeTooLowException();
	this->_grade -= i;
}

void Bureaucrat::gradeDown(int i)
{
    if (this->_grade + i < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->_grade + i > 150)
        throw Bureaucrat::GradeTooLowException();
	this->_grade += i;
}

void Bureaucrat::signForm(Form &form)
{
	if (this->_grade > form.getLvlToSign())
		std::cout << this->_name << " cannot sign " << form.getName() << " because he is a looser and his grade is too low." << std::endl;
	else if (form.isSigned())
		std::cout << this->_name << " cannot sign " << form.getName() << " because its already signed." << std::endl;
	else
		std::cout << this->_name << " signs " << form.getName() << std::endl;
	form.beSigned(*this);
}

void Bureaucrat::executeForm(Form const & form)
{
	bool tester = false;
	try
	{
		form.execute(*this);
		tester = true;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " couldn't execute " << form.getName() << std::endl;
	}
	if (tester)
		std::cout << this->getName() << " executs " << form.getName() << std::endl;
}

// ############### DESTRUCTOR


Bureaucrat::~Bureaucrat()
{}
