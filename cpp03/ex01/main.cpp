/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 12:28:35 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/20 17:34:20 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"
#include "Scavtrap.hpp"

int main(void)
{
	Claptrap	claptrap("Bob");
	Scavtrap	scavtrap("Phillipe");
	claptrap.attack("Jean Michel");
	scavtrap.attack("Thierry");
	scavtrap.takeDamage(60);
	scavtrap.beRepaired(10);
	scavtrap.guardGate();
	claptrap.takeDamage(30);
	claptrap.beRepaired(50);
	return (0);
}
