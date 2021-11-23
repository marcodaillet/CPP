/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:20:18 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/23 10:43:30 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

class AMateria;
#include "AMateria.hpp"
#include <iostream>

class ICharacter
{
	public:
		virtual std::string const &getName() const = 0;
		virtual void equip(AMateria *item) = 0;
		virtual void unequip(int index) = 0;
		virtual void use(int index, ICharacter& target) = 0;
		virtual ~ICharacter() {};
};

class Rogue : public ICharacter
{
	private:
		std::string _name;
		AMateria *_inventory[4];
	public:
		Rogue();
		Rogue(std::string name);
		Rogue(const Rogue &old);
		Rogue const &operator=(const Rogue &old);
		std::string const & getName(void) const;

		virtual void equip(AMateria *item);
		virtual void unequip(int index);
		virtual void use(int index, ICharacter& target);

		virtual ~Rogue();
};

class Priest : public ICharacter
{
	private:
		std::string _name;
		AMateria *_inventory[4];
	public:
		Priest();
		Priest(std::string name);
		Priest(const Priest &old);
		Priest const &operator=(const Priest &old);
		std::string const & getName(void) const;

		virtual void equip(AMateria *item);
		virtual void unequip(int index);
		virtual void use(int index, ICharacter& target);

		virtual ~Priest();
};

#endif
