/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:29:42 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/26 14:50:03 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void )
{
	std::cout << "######## INT TESTING ##########" << std::endl;
	int a = 2;
	int b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "swaping..." << std::endl;
	swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
	
	std::cout << "######## STRING TESTING ##########" << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "swaping..." << std::endl;
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << max( c, d ) << std::endl;
	
	std::cout << "######## FLOAT TESTING ##########" << std::endl;
	float e = 7.7;
	float f = -12325.865;
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "swaping..." << std::endl;
	swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << max( e, f ) << std::endl;

	std::cout << "######## DOUBLE TESTING ##########" << std::endl;
	double g = 3548124;
	double h = 5266625.865;
	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "swaping..." << std::endl;
	swap(g, h);
	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "min( g, h ) = " << min( g, h ) << std::endl;
	std::cout << "max( g, h ) = " << max( g, h ) << std::endl;

	return 0;
}
