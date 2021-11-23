/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:59:04 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/19 19:19:12 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_val);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_val = raw;
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_val = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_val = copy.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed& old)
{
	std::cout << "Assignation operation called" << std::endl;
	if (this == &old)
		return (*this);
	this->fixed_val = old.getRawBits();
	return (*this);
}
