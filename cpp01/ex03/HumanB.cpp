/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:06:13 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/18 15:53:18 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name), _weapon(NULL) {}

void HumanB::setWeapon(Weapon *const weapon)
{
	this->_weapon = weapon;
}

Weapon &HumanB::getWeapon(void) const
{
	return (const_cast<Weapon &>(*this->_weapon));
}

void HumanB::attack(void) const
{
	if (!_weapon)
		return ;
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
