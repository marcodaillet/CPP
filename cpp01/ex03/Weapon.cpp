/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:16:20 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/18 13:53:02 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : type(type)
{}

const std::string &Weapon::getType(void) const
{
	return (const_cast<const std::string &>(this->type));
}

void	Weapon::setType(const std::string &string)
{
	this->type = string;
}
