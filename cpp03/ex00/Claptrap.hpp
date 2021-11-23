/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:34:26 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/20 12:34:42 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class Claptrap
{
	private:
		std::string _name;
		int	_hitPoints = 10;
		int _energyPoints = 10;
		int _attackDamage = 0;
	public:
		Claptrap();
		Claptrap(std::string name);
		Claptrap(Claptrap &old);
		Claptrap &operator=(Claptrap const &old);
		~Claptrap();

		std::string getName() const;
		int	getPH() const;
		int getPE() const;
		int getAD() const;

		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
