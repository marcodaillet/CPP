/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:54:04 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/28 14:55:45 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

class NotFound : public std::exception
{
	virtual const char* what() const throw() { return ("Not Found"); }
};

template<typename T>
typename T::iterator easyfind(T &container, int n)
{
	typename T::iterator ret = std::find(container.begin(), container.end(), n);
	if (ret == container.end())
		throw NotFound();
	return (ret);
}

#endif
