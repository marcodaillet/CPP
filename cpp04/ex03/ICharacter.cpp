/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:44:23 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/23 12:31:28 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

Rogue::Rogue() : _name("Calciflex")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Rogue::Rogue(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Rogue::Rogue(const Rogue &old)
{
	*this = old;
}

Priest::Priest() : _name("Sebastopaul")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Priest::Priest(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Priest::Priest(const Priest &old)
{
	*this = old;
}

Rogue const &Rogue::operator=(Rogue const &old)
{
	this->_name = old.getName();
	for (int i = 0; i < 4; i++)
	{
		if (old._inventory[i])
			this->_inventory[i] = old._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return (*this);
}

Priest const &Priest::operator=(Priest const &old)
{
	this->_name = old.getName();
	for (int i = 0; i < 4; i++)
	{
		if (old._inventory[i])
			this->_inventory[i] = old._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return (*this);
}

std::string const &Rogue::getName() const
{
	return (this->_name);
}

std::string const &Priest::getName() const
{
	return (this->_name);
}

void showInv(AMateria *inventory[4])
{
	std::cout << "Acctual inventory:" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			std::cout << inventory[i]->getType() << std::endl;
		else
			std::cout << "-empty-" << std::endl;
	}
}

void Rogue::equip(AMateria *item)
{
	std::cout << "The Rogue " << this->getName() << " equips " << item->getType() << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = item;
			break ;
		}
	}
	showInv(this->_inventory);
}

void Priest::equip(AMateria *item)
{
	std::cout << "The Priest " << this->getName() << " equips " << item->getType() << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = item;
			break ;
		}
	}
	showInv(this->_inventory);
}

void 	Rogue::unequip(int index)
{
	std::cout << "The Rogue " << this->_name << " unequips " << this->_inventory[index]->getType() << std::endl;
	if (index < 4)
	{
		this->_inventory[index] = NULL;
		for (int i = index; i < 3; i++)
			this->_inventory[i] = this->_inventory[i + 1];
		showInv(this->_inventory);
	}
	else
		std::cout << "The Rogue " << this->_name << " doesn't have that much stuff" << std::endl;
}

void 	Priest::unequip(int index)
{
	std::cout << "The Priest " << this->_name << " unequips " << this->_inventory[index]->getType() << std::endl;
	if (index < 4)
	{
		this->_inventory[index] = NULL;
		for (int i = index; i < 3; i++)
			this->_inventory[i] = this->_inventory[i + 1];
		showInv(this->_inventory);
	}
	else
		std::cout << "The Priest " << this->_name << " doesn't have that much stuff" << std::endl;
}

void	Rogue::use(int index, ICharacter &target)
{
	std::cout << this->_name << ": Unlimited paaaaaaaaaaaaaaaawa" << std::endl;
	this->_inventory[index]->use(target);
}

void	Priest::use(int index, ICharacter &target)
{
	std::cout << this->_name << ": I can be useful as well !" << std::endl;
	this->_inventory[index]->use(target);
}

Rogue::~Rogue()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Rogue " << this->_name << " has perished" << std::endl;
}

Priest::~Priest()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Rogue " << this->_name << " has perished" << std::endl;
}
