/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:52:12 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/26 15:02:10 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename A, typename L, typename F>
void iter(A array, L &length, F *function)
{
	L i = 0;
	while (i < length)
	{
		function(array[i]);
		i++;
	}
}

#endif
