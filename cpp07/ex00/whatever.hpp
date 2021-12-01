/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:54:04 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/26 14:43:09 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T &a, T &b)
{
	T tmp = b;
	b = a;
	a = tmp;
}

template<typename T>
T min(T &a, T &b)
{
	if (a == b || a > b)
		return (b);
	else
		return (a);
}

template<typename T>
T max(T &a, T &b)
{
	if (a == b || a < b)
		return (b);
	else
		return (a);
}

#endif
