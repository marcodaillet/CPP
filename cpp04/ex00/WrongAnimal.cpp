/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:41:55 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/21 16:13:59 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

Wronganimal::Wronganimal() { std::cout << "A Wronganimal was born " << std::endl; }

Wronganimal::Wronganimal(Wronganimal const &old) { *this = old;}

Wronganimal & Wronganimal::operator=(Wronganimal const &old)
{
	this->_type = old.getType();
	return (*this);
}

std::string Wronganimal::getType() const
{
	return (this->_type);
}

void Wronganimal::makeSound() const
{
	std::cout << "I am a WrongSound" << std::endl;
}

Wronganimal::~Wronganimal() { std::cout << "An animal died" << std::endl; }

WrongDog::WrongDog()
{
	this->_type = "WrongDog";
	std::cout << "It's a very friendly WrongDog " << std::endl;
}

WrongDog::WrongDog(WrongDog const &old) { *this = old;}

WrongDog & WrongDog::operator=(WrongDog const &old)
{
	this->_type = old.getType();
	return (*this);
}

void WrongDog::makeSound() const
{
	std::cout << "WrongWoof !" << std::endl;
}

WrongDog::~WrongDog() { std::cout << "The WrongDog died" << std::endl; }

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "It's a WrongCat " << std::endl;
}

WrongCat::WrongCat(WrongCat const &old) { *this = old;}

WrongCat & WrongCat::operator=(WrongCat const &old)
{
	this->_type = old.getType();
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongMiaou" << std::endl;
}

WrongCat::~WrongCat() { std::cout << "The WrongCat died" << std::endl; }

