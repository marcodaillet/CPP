/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:33:36 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/24 09:58:11 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &old)
{
	if (this != &old)
	{
		this->_grade = old.getGrade();
	}
	return (*this);
}

const std::string &Bureaucrat::getName() const
{
	return (this->_name);
}

unsigned int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

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

std::ostream &operator<<(std::ostream &out, Bureaucrat const &in)
{
	std::cout << in.getName() << ", bureaucrat grade : " << in.getGrade() << "." << std::endl;
	return (out);
}

Bureaucrat::~Bureaucrat()
{}
