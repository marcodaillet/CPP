/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:08:38 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/24 15:04:06 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern &old)
{
	(void)old;
}

Intern & Intern::operator=(Intern const &old)
{
	(void)old;
	return (*this);
}

static Form* createf1(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

static Form* createf2(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

static Form* createf3(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

bool isSame(const std::string &s1, const std::string &s2)
{
	unsigned int ls1 = s1.size();
	unsigned int ls2 = s2.size();
	if (ls2 != ls1)
		return (false);
	for (unsigned int i = 0; i < ls1; i++)
		if (tolower(s1[i]) != tolower(s2[i]))
			return (false);
	return (true);
}

Form* Intern::makeForm(const std::string &form, const std::string &target) const
{
	Form *ret = nullptr;

	Fo tab[] = 
	{
		{"ShrubberyCreation", &createf1},
		{"Shrubbery Creation", &createf1},
		{"RobotomyRequest", &createf2},
		{"Robotomy Request", &createf2},
		{"PresidentialPardon", &createf3},
		{"Presidential Pardon", &createf3},
	};
	for (int i = 0; i < 6; i++)
	{
		if (isSame(form, tab[i].name))
		{
			std::cout << "Intern creates " << tab[i].name << std::endl;
			ret = tab[i].func(target);
			return (ret);
		}
	}
	throw Intern::FormDoesNotExist();
	return (ret);
}

Intern::~Intern()
{}
