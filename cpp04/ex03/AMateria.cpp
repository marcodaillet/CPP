/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:44:23 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/23 12:31:57 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{}

AMateria::AMateria(AMateria const & old) :_type(old._type)
{}

Ice::Ice() : AMateria("ice")
{}

Ice::Ice(Ice const &old) : AMateria(old)
{}

Cure::Cure() : AMateria("cure")
{}

Cure::Cure(Cure const &old) : AMateria(old)
{}

AMateria const &AMateria::operator=(AMateria const &old)
{
	(void)old;
	return (*this);
}

Ice const &Ice::operator=(Ice const &old)
{
	(void)old;
	return (*this);
}

Cure const &Cure::operator=(Cure const &old)
{
	(void)old;
	return (*this);
}

std::string const &AMateria::getType(void) const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target) const
{
	std::cout << "* throws a spell at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const
{
	Ice *clone = new Ice(*this);
	return (clone);
}

void Ice::use(ICharacter &target) const
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Cure::clone() const
{
	Cure *clone = new Cure(*this);
	return (clone);	
}

void Cure::use(ICharacter &target) const
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria::~AMateria() {}
Ice::~Ice() {}
Cure::~Cure() {}
