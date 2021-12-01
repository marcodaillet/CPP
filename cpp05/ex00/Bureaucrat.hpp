/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:18:37 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/24 09:57:09 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
	private:
		Bureaucrat();
		const std::string _name;
		unsigned int _grade;
	public:
		Bureaucrat(const std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat const &old);
		Bureaucrat & operator=(Bureaucrat const &old);
		~Bureaucrat();

		const std::string &getName() const;
		unsigned int getGrade() const;

		void gradeUp(int i);
		void gradeDown(int i);

		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("Bureaucrat exception: grade too Low");
			}
		};
		class GradeTooHighException: public std::exception
        {
            virtual const char* what() const throw()
			{
				 return ("Bureaucrat exception: grade too Low");
			}
        };
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &in);

#endif
