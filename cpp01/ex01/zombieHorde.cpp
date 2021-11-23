/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:29:05 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/16 18:48:44 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int i, std::string name)
{
	Zombie *z = new Zombie[i];
	for (int j = 0; j < i; j++)	
		z[i] = Zombie(name);
	return (z);
}
