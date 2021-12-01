/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:03:49 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/26 11:28:36 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>

class Base
{
	public:
		virtual ~Base();
};

class A : virtual public Base
{
};

class B : virtual public Base
{
};

class C : virtual public Base
{
};

Base* generate(void);
void identify(Base *p);
void identify(Base &p);

#endif
