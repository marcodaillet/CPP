/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:59:04 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/19 19:55:52 by mdaillet         ###   ########.fr       */
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

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_val = i << Fixed::bits;
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_val = roundf(f * (1 << Fixed::bits));
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
	this->fixed_val = old.getRawBits();
	return (*this);
}

int Fixed::toInt(void) const
{
	return ((int)(this->fixed_val >> this->bits));
}

float Fixed::toFloat(void) const
{
	return ((float)this->fixed_val / (float)(1 << this->bits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixe)
{
	out << fixe.toFloat();
	return (out);
}
