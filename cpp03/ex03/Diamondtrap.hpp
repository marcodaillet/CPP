/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diamondtrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:09:58 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/20 19:24:30 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "Fragtrap.hpp"
# include "Scavtrap.hpp"
# include "Claptrap.hpp"

class Diamondtrap : public Scavtrap, public Fragtrap
{
	private:
		std::string _name;
	public:
		Diamondtrap();
		Diamondtrap(std::string name);
		Diamondtrap(Diamondtrap &old);
		Diamondtrap & operator=(Diamondtrap const &old);
		~Diamondtrap();

		void attack(std::string const &target);
		void whoAmI(void);
};

#endif
