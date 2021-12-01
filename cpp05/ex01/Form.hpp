/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:18:37 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/23 17:48:38 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Form;

#include "Bureaucrat.hpp"

class Form
{
	private:
		Form();
		const std::string _name;
		const unsigned int _lvlToSign;
		const unsigned int _lvlToExe;
		bool _signed;
	public:
		Form(const std::string name, unsigned int lvlToSign, unsigned int lvlToExe);
		Form(Form const &old);
		Form & operator=(Form const &old);
		virtual ~Form();

		std::string getName() const;
		unsigned int getLvlToExe() const;
		unsigned int getLvlToSign() const;
		bool isSigned() const;

		Form& beSigned(Bureaucrat &bureaucrat);
		
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("Form exception: grade too Low");
			}
		};
		class GradeTooHighException: public std::exception
        {
            virtual const char* what() const throw()
			{
				 return ("Form exception: grade too Low");
			}
        };
};

std::ostream &operator<<(std::ostream &out, Form const &in);

#endif
