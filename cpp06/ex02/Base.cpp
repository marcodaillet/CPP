/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:20:51 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/26 12:52:02 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <string>

Base::~Base()
{}

Base* generate(void)
{
	int i;
	srand(time(0));
	i = (rand() % 3);
	if (i == 0)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base *p)
{
	A *baseA = dynamic_cast<A*>(p);
	if (baseA)
		std::cout << "The object is of class A" << std::endl;
	B *baseB = dynamic_cast<B*>(p);
	if (baseB)
		std::cout << "The object is of class B" << std::endl;
	C *baseC = dynamic_cast<C*>(p);
	if (baseC)
		std::cout << "The object is of class C" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A &baseA = dynamic_cast<A&>(p);
		std::cout << "The object is of class A" << std::endl;
	}
	catch (const std::bad_cast &bad)
	{}
	try
	{
		B &baseB = dynamic_cast<B&>(p);
		std::cout << "The object is of class B" << std::endl;
	}
	catch (const std::bad_cast &bad)
	{}
	try
	{
		C &baseC = dynamic_cast<C&>(p);
		std::cout << "The object is of class C" << std::endl;
	}
	catch (const std::bad_cast &bad)
	{}
}
