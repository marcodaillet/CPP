/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:17:53 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/16 18:24:26 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie();
		Zombie(const std::string &name);
		void announce(void);
		void set_name(const std::string &name);
		std::string get_name(void) const;
	private:
		std::string _name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
