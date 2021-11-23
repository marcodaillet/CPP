/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:56:08 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/20 19:34:55 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fragtrap.hpp"

Fragtrap::Fragtrap() : Claptrap("Calciflex")
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Constructor called --> a wild Fragtrap appears !";
	std::cout << std::endl;
}

Fragtrap::Fragtrap(std::string name) : Claptrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Constructor called --> a wild Fragtrap appears !";
	std::cout << std::endl;
}

Fragtrap::Fragtrap(Fragtrap &old)
{
	*this = old;
}

Fragtrap & Fragtrap::operator=(Fragtrap const &old)
{
	this->_name = old.getName();
	this->_hitPoints = old.getPH();
	this->_energyPoints = old.getPE();
	this->_attackDamage = old.getAD();
	return (*this);
}

Fragtrap::~Fragtrap()
{
	std::cout << "Destructor called --> " << this->_name << " lost all his Fragtrap powers. I lost all interest in him" << std::endl;
}

void Fragtrap::attack(std::string const &target)
{
	std::cout << "The almighty " << this->_name << " stick his finger in " << target << "'s eye, dealing " << this->_attackDamage << " points of damage, now thats some entertainement" << std::endl;
	this->_energyPoints -= 1;
}

void Fragtrap::highFivesGuys()
{
	std::cout << this->_name << " *Hands his hand in the air desperatly waiting for someone to give him a high five*";
	std::cout << "Please dont let me hanging" << std::endl;
}
