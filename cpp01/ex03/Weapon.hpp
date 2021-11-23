/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:33:27 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/18 13:53:00 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(const std::string &type);
		const std::string	&getType(void) const;
		void				setType(const std::string &type);
};
