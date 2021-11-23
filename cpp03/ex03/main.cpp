/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 12:28:35 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/21 16:03:58 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Diamondtrap.hpp"

int main(void)
{
	Claptrap	claptrap("Bob");
	Scavtrap	scavtrap("Phillipe");
	Fragtrap	fragtrap("Jaquie");
	Diamondtrap diamondtrap("Fabrice");


	claptrap.attack("Jean Michel");
	claptrap.takeDamage(30);
	claptrap.beRepaired(50);

	scavtrap.attack("Thierry");
	scavtrap.takeDamage(30);
	scavtrap.guardGate();
	scavtrap.beRepaired(10);

	fragtrap.attack("Dana");
	fragtrap.takeDamage(69);
	fragtrap.beRepaired(20);
	fragtrap.highFivesGuys();

	diamondtrap.attack("Jeremie");
	diamondtrap.whoAmI();
	diamondtrap.takeDamage(30);
	diamondtrap.beRepaired(50);

	return (0);
}
