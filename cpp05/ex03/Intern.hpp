/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:26:46 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/24 14:46:08 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

typedef struct
{
	const std::string name;
	Form *(*func)(std::string const &target);
}Fo;

class Intern
{
	public:
		Intern();
		Intern(const Intern &old);
		Intern & operator=(const Intern &old);
		Form* makeForm(const std::string &form, const std::string &target) const;
		class FormDoesNotExist: public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("Intern Exception: Form does not exist");
			}
		};

		virtual ~Intern();
};

#endif
