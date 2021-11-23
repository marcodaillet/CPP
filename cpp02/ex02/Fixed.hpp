/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:50:56 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/19 20:38:05 by mdaillet         ###   ########.fr       */
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
		Fixed &operator=(const Fixed& old); // We return a ref to a fixed number while overloading the "=" operator
		
		bool operator>(Fixed const &other) const;
		bool operator<(Fixed const &other) const;
		bool operator>=(Fixed const &other) const;
		bool operator<=(Fixed const &other) const;
		bool operator==(Fixed const &other) const;
		bool operator!=(Fixed const &other) const;

		Fixed operator+(const Fixed& other) const;	
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;

		Fixed & operator++(void);
		Fixed operator++(int);
		Fixed & operator--(void);
		Fixed operator--(int);

		static Fixed &min(Fixed &f1, Fixed &f2);
		const static Fixed &min(const Fixed &f1, const Fixed &f2);
		static Fixed &max(Fixed &f1, Fixed &f2);
		const static Fixed &max(const Fixed &f1, const Fixed &f2);


		int getRawBits(void) const;
		void setRawBits(int const rawbits);
		int toInt(void) const;
		float toFloat(void) const;
};

Fixed &min(Fixed &f1, Fixed &f2);
Fixed &max(Fixed &f1, Fixed &f2);
std::ostream &operator<<(std::ostream &out, const Fixed &fixe); // Overloading the operator "<<" to assign the fixed value of &fixe to the output "out" that has been requested

#endif
