/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:45:48 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/18 13:37:20 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

#define DEFAULT "bow"

class HumanA
{
	private:
		std::string _name;
		Weapon &_weapon;
	public:
		HumanA(const std::string &name, Weapon &weapon);
		void	attack(void) const;
};
