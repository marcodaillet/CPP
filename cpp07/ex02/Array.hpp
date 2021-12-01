/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:03:49 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/27 15:11:54 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template<class T>
class Array
{
	private:
		T *_array;
		unsigned int _size;
	public:
		Array() : _array(new T[0]), _size(0) {};
		Array(unsigned int n) : _array(new T[n]), _size(n) {};
		Array(Array &old)
		{
			this->_size = old.size();
			this->_array = new T[_size]();
			for (int i = 0; i < _size; i++)
			{
				this->_array[i] = old._array[i];
			}
		};

		Array & operator=(Array &old)
		{
			if (this == old)
				return (this);
			this->_size = old.size();
			this->_array = new T[_size];
			for (int i = 0; i < _size; i++)
			{
				this->_array[i] = old->_array[i];
			}
			return (this);
		};

		T & operator[](unsigned int index)
		{
			if (index > static_cast<unsigned int>(this->_size) - 1)
				throw OutOfBoundsException();
			return (this->_array[index]);
		};

		virtual ~Array() {delete [] _array;};
		
		unsigned int size() { return (this->_size); };
		
		class OutOfBoundsException : public std::exception
		{
			public:
				OutOfBoundsException() throw() {};
				OutOfBoundsException(const OutOfBoundsException&) throw() {};
				OutOfBoundsException & operator=(const OutOfBoundsException&) throw() {}
				virtual ~OutOfBoundsException() throw() {};
				virtual const char* what() const throw() { return ("Array Exception : index out of bounds");};
		};
};

#endif
