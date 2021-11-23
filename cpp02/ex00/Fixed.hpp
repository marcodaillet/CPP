/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:50:56 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/19 19:19:17 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
	private:
		int fixed_val;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed &operator=(const Fixed& old);
		int getRawBits(void) const;
		void setRawBits(int const rawbits);
};

#endif
