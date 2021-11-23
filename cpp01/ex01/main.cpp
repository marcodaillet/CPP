/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:30:07 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/16 18:45:30 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *z = zombieHorde(10, "Louis IV le Gros");
	for (int i = 0; i < 10; i++)
		z[i].announce();
	delete[] z;
	return (0);
}
