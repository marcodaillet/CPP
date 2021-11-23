/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:34:26 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/20 19:12:18 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "Claptrap.hpp"
# include "Scavtrap.hpp"
# include "Fragtrap.hpp"

class Scavtrap : virtual public Claptrap
{
	public:
		Scavtrap();
		Scavtrap(std::string name);
		Scavtrap(Scavtrap &old);
		Scavtrap & operator=(Scavtrap const &old);
		~Scavtrap();

		void attack(std::string const &target)  ;
		void guardGate();
};

#endif
