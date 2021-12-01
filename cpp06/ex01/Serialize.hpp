/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:38:22 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/25 16:08:01 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALISE_HPP
#define SERIALISE_HPP

#include <iostream>
#include <string>
#include <cstdlib>

typedef struct s_Data
{
	std::string s;
	int i;
} Data;

uintptr_t      serialize(Data *ptr);
Data *      deserialize(uintptr_t raw);

#endif
