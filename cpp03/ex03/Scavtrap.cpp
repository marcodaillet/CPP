/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:56:08 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/20 19:36:15 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scavtrap.hpp"

Scavtrap::Scavtrap() : Claptrap("Mechantox le sanglant")
{
	this->_hitPoints = 50;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Constructor called --> here we go for  Scavtrap *clapping*";
	std::cout << std::endl;
}

Scavtrap::Scavtrap(std::string name) : Claptrap(name)
{
	this->_name = name;
	this->_hitPoints = 50;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Constructor called --> here we go for  Scavtrap *clapping*";
	std::cout << std::endl;
}

Scavtrap::Scavtrap(Scavtrap &old)
{
	*this = old;
}

Scavtrap & Scavtrap::operator=(Scavtrap const &old)
{
	this->_name = old.getName();
	this->_hitPoints = old.getPH();
	this->_energyPoints = old.getPE();
	this->_attackDamage = old.getAD();
	return (*this);
}

Scavtrap::~Scavtrap()
{
	std::cout << "Destructor called --> " << this->_name << " has been retrogaded to the Calptrap rank. What a looser" << std::endl;
}

void Scavtrap::attack(std::string const &target)
{
	std::cout << this->_name << " hits violently " << target << ", causing him " << this->_attackDamage << " points of damage" << std::endl;
	this->_energyPoints -= 1;
}

void Scavtrap::guardGate()
{
	std::cout << this->_name << " has started keeping the gate" << std::endl;
}
