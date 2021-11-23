/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 12:28:35 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/20 17:20:31 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

int main(void)
{
	Claptrap	claptrap("Bob");

	claptrap.attack("a donkey");
	claptrap.takeDamage(30);
	claptrap.beRepaired(10);
	return (0);
}
