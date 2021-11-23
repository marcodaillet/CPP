/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:21:59 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/21 18:10:09 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{}

Brain::Brain(const Brain &old)
{
	*this = old;
}

Brain & Brain::operator=(const Brain &old)
{
	for (int i = 0; i < 100; i++)
		this->setIdea(i, old.getIdea(i));
	return (*this);
}


bool Brain::checkIndex(int index) const
{
    if (index < 0 || index >= 100)
    {
        std::cerr << "Invalid index" << std::endl;
        return false;
    }
    return true;
}

const std::string  Brain::getIdea(int index) const
{
	if (checkIndex(index))
		return (this->_ideas[index]);
	return 0;
}

void Brain::setIdea(int index, const std::string s)
{
	if (checkIndex(index))
		_ideas[index] = s;
}

Brain::~Brain()
{}
