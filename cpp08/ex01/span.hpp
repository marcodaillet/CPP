/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:52:12 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/30 13:51:03 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

class span;

class span
{
	private:
		std::vector<int> _vec;
		unsigned int _maxSize;
	public:
		span();
		span(unsigned int N);
		span(const span &old);
		span & operator=(const span &old);
		~span();

		void addNumber(int i);
		long shortestSpan(void);
		long longestSpan(void);
		
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) // adding numbers by passing a range of iterators. We are acually passing a vector with .begin() and .end()
		{
			if (end - begin <= _maxSize)
				std::copy(begin, end, std::back_inserter(this->_vec)); // Copy the range begin->end at the end of vec
			else
				throw (ExceptionNotEnoughSpace());
			std::sort(this->_vec.begin(), this->_vec.end()); // Sort the vector
		}

		unsigned int getSize(void) const;
		unsigned int getMaxSize(void) const;
		unsigned int getSpaceLeft(void) const;
		std::vector<int> getVec(void) const;

		class ExceptionCannotSpan : public std::exception
		{
			virtual const char* what() const throw() { return ("Cannot calculate span with this range"); };
		};
		class ExceptionNotEnoughSpace : public std::exception
		{
			virtual const char* what() const throw() { return ("Not enough space to add this range"); };
		};
		class ExceptionVectorFull : public std::exception
		{
			virtual const char* what() const throw() { return ("Vector is already fulll"); };
		};
};

#endif
