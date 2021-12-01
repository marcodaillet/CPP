/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:18:37 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/24 11:48:18 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm();
		const std::string _target;
	public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &old);
		PresidentialPardonForm & operator=(const PresidentialPardonForm &old);
		virtual ~PresidentialPardonForm();

		const std::string getTarget() const;

		void execute(Bureaucrat const &executor)const;
};

#endif
