/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:05:44 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/30 13:47:54 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

span::span(void): _maxSize(0)
{};

span::span(unsigned int n) : _maxSize(n)
{}

span::span(const span &old)
{
	*this = old;
}

span & span::operator=(const span &old)
{
	if (this == &old)
		return (*this);
	this->_maxSize = old.getMaxSize();
	this->_vec = old.getVec();
	return (*this);
}

span::~span()
{}

void span::addNumber(int i)
{
	if (this->getSpaceLeft() <= 0 && this->_maxSize)
		throw ExceptionVectorFull();
	else
		this->_vec.push_back(i);
}

long span::longestSpan(void)
{
	if (this->getSize() <= 1)
		throw ExceptionCannotSpan();
	std::vector<int>::iterator min = std::min_element(this->_vec.begin(), this->_vec.end()); //std::min_element returns an iterator corresponding to the min value in the range
	std::vector<int>::iterator max = std::max_element(this->_vec.begin(), this->_vec.end()); //std::max_element returns an iterator corresponding to the max value in the range

	long ret = (long)*max - (long)*min; // Have to pass them as pointers because iterators are behaving like adresses
	if (ret < 0)
		return (ret * -1);
	return (ret);
}

long span::shortestSpan(void)
{
	long ret = 2147483647;
    if (this->getSize() <= 1)
        throw ExceptionCannotSpan();
    std::sort(this->_vec.begin(), this->_vec.end());
	for (int i = 0; i + 1 < _vec.size(); i++)
	{
		if (ret > (this->_vec[i + 1] - this->_vec[i]))
			ret = this->_vec[i + 1] - this->_vec[i];
	}
    return (ret);
}

unsigned int span::getSize() const
{
	return (this->_vec.size());
}

unsigned int span::getMaxSize() const 
{
	return (this->_maxSize);
}

std::vector<int> span::getVec() const 
{
	return (this->_vec);
}

unsigned int span::getSpaceLeft() const
{
	return ((this->_maxSize - this->_vec.size()));
}
