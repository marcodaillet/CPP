/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:50:56 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/19 19:55:10 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int fixed_val;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(const int i);
		Fixed(const float i);
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed &operator=(const Fixed& old);
		int getRawBits(void) const;
		void setRawBits(int const rawbits);
		int toInt(void) const;
		float toFloat(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixe);

#endif
