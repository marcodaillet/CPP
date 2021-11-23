/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:38:07 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/23 12:29:50 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

MagicBook::MagicBook()
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	std::cout << "A powerful magic book has been created" << std::endl;
}

MagicBook::MagicBook(MagicBook const &old)
{
	*this = old;
	std::cout << "A powerful magic book has been created" << std::endl;
}

MagicBook const & MagicBook::operator=(MagicBook const &old)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = old._materia[i];
	return (*this);
}

void MagicBook::learnMateria(AMateria *newItem)
{
	std::cout << newItem->getType() << " has been added to the magic book" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i]  = newItem;
			return ;
		}
	}
}

AMateria* MagicBook::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i]->getType() == type)
			return this->_materia[i]->clone();
		if (this->_materia[i] == NULL)
			break ;
	}
	return (NULL);
}

MagicBook::~MagicBook()
{
	for (int i = 0; i < 4; i++)
		if (_materia[i])
			delete _materia[i];
	std::cout << "MagicBook has been deleted" << std::endl;
}
