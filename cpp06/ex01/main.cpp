/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:29:42 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/25 16:09:35 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main(void)
{
	Data *data = new Data;
	data->s = "banane";
	data->i = 42;
	std::cout << "Data adress : " << data << std::endl;
	std::cout << "Data str : " << data->s << std::endl;
	std::cout << "Data int : " << data->i << std::endl;
	uintptr_t ptr = serialize(data);
	std::cout << "Serialized data address : " << ptr << std::endl;
	Data *newd = deserialize(ptr);
	std::cout << "Deserialized newdata address : " << newd << std::endl;
	std::cout << "Deserialized newdata str : " << data->s << std::endl;
	std::cout << "Deserialized newdata int : " << data->i << std::endl;
	delete data;
	return (0);
}
