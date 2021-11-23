/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diamondtrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:56:08 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/20 20:32:45 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Diamondtrap.hpp"

Diamondtrap::Diamondtrap() : Scavtrap(), Fragtrap()
{
	this->_name = "Vladimir";
	Claptrap::_name = Claptrap::_name + "_clap_name";
	this->_hitPoints = Fragtrap::_hitPoints;
	this->_energyPoints = Scavtrap::_energyPoints;
	this->_attackDamage = Fragtrap::_attackDamage;
	std::cout << "Constructor called --> Fuuuuuuuuuusiooonnn ! Kneel before Scavtrap and Fragtrap fusion form : " << this->_name;
	std::cout << std::endl;
}

Diamondtrap::Diamondtrap(std::string name) :  Scavtrap(name), Fragtrap(name)
{
	this->_name = name;
	Claptrap::_name = Claptrap::_name + "_clap_name";
	this->_hitPoints = Fragtrap::_hitPoints;
	this->_energyPoints = Scavtrap::_energyPoints;
	this->_attackDamage = Fragtrap::_attackDamage;
	std::cout << "Constructor called --> Fuuuuuuuuuusiooonnn ! Kneel before Scavtrap and Fragtrap fusion form : " << this->_name;
	std::cout << std::endl;
}

Diamondtrap::Diamondtrap(Diamondtrap &old)
{
	*this = old;
}

Diamondtrap & Diamondtrap::operator=(Diamondtrap const &old)
{
	this->_name = old.getName();
	this->_hitPoints = old.getPH();
	this->_energyPoints = old.getPE();
	this->_attackDamage = old.getAD();
	return (*this);
}

Diamondtrap::~Diamondtrap()
{
	std::cout << "Destructor called --> " << this->_name << " lost all his Diamondtrap powers. RIP" << std::endl;
}

void Diamondtrap::attack(std::string const &target)
{
	Scavtrap::attack(target);
}

void Diamondtrap::whoAmI()
{
	std::cout << "My name is " << _name << ", I am " << Claptrap::_name << "'s final form, fear me" << std::endl;
}
