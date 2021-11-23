/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 09:46:44 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/23 10:43:24 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria 
{
	private:
		AMateria() {};
	protected:
		std::string _type;
	public:
		AMateria(std::string const & type);
		AMateria(AMateria const & copy);
		AMateria const &operator=(AMateria const &old);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target) const;
		virtual ~AMateria();
};

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const &old);
		Ice const &operator=(Ice const &old);
		AMateria *clone() const;
		void use(ICharacter &target) const;
		virtual ~Ice();
};

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &old);
		Cure const &operator=(Cure const &old);
		AMateria *clone() const;
		void use(ICharacter &target) const;
		virtual ~Cure();
};

#endif
