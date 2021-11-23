/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:34:26 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/20 19:19:28 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "Claptrap.hpp"

class Fragtrap : virtual public Claptrap
{
	public:
		Fragtrap();
		Fragtrap(std::string name);
		Fragtrap(Fragtrap &old);
		Fragtrap & operator=(Fragtrap const &old);
		~Fragtrap();

		void attack(std::string const &target);
		void highFivesGuys(void);
};

#endif
