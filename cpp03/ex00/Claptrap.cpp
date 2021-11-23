/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:56:08 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/20 12:37:58 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

Claptrap::Claptrap() : _name("Joe la fracasse"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor called --> " << this->_name << " is created" << std::endl;
}

Claptrap::Claptrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor called --> " << this->_name << " is created" << std::endl;
}

Claptrap::Claptrap(Claptrap &old)
{
	*this = old;
}

Claptrap & Claptrap::operator=(Claptrap const &old)
{
	this->_name = old.getName();
	this->_hitPoints = old.getPH();
	this->_energyPoints = old.getPE();
	this->_attackDamage = old.getAD();
	return (*this);
}

Claptrap::~Claptrap(void)
{
	std::cout << "Destructor called --> " << this->_name << " perished forever" << std::endl;
}

std::string Claptrap::getName() const
{
	return (this->_name);
}

int Claptrap::getPH() const
{
    return (this->_hitPoints);
}

int Claptrap::getPE() const
{
    return (this->_energyPoints);
}

int Claptrap::getAD() const
{
    return (this->_attackDamage);
}

void Claptrap::attack(std::string const &target)
{
	std::cout << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage" << std::endl;
	this->_energyPoints -= 1;
}

void Claptrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << this->_name << " inanimated corpse takes " << amount << " points of damage" << std::endl;
		return ;
	}
	std::cout << this->_name << " takes " << amount << " points of damage" << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " bravely dies during this epic fight" << std::endl;
}

void Claptrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name;
	if (this->_hitPoints <= 0)
		std::cout << " returns from the dead and";
	this->_hitPoints += amount;
	std::cout << " is repaired for " << amount << " points of health" << std::endl;
}
