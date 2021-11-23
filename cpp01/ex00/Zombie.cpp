/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:22:09 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/16 18:35:12 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("Joey") { };
Zombie::Zombie(const std::string &name) : _name(name) { };

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(const std::string &name)
{
	this->_name = name;
}

std::string Zombie::get_name(void) const
{
	return (this->_name);
}
