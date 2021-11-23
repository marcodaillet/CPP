/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:45:48 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/18 15:53:30 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

#define DEFAULT "bow"

class HumanB
{
	private:
		std::string _name;
		Weapon *_weapon;
	public:
		HumanB(void);
		HumanB(const std::string &name);
		void	attack(void) const;
		void	setWeapon(Weapon *const weapon);
		Weapon	&getWeapon(void) const;
};
