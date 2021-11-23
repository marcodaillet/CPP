/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:20:18 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/23 10:43:39 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
		virtual ~IMateriaSource() {}
};

class MagicBook : public IMateriaSource
{
	private:
		AMateria *_materia[4];
	public:
		MagicBook();
		MagicBook(MagicBook const &old);
		MagicBook const & operator=(MagicBook const &old);

		void learnMateria(AMateria *newItem);
		AMateria* createMateria(std::string const &type);

		virtual ~MagicBook();
};

#endif
