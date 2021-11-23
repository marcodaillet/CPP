/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:30:07 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/16 18:33:04 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	randomChump("Fabrice");

	Zombie *z = newZombie("Katrina");
	z->announce();
	delete z;
	return (0);
}
