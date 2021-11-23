/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:41:55 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/21 16:08:06 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "An animal was born " << std::endl;
}

Animal::Animal(Animal const &old)
{
	*this = old;
}

Animal & Animal::operator=(Animal const &old)
{
	this->_type = old.getType();
	return (*this);
}

std::string Animal::getType() const
{
	return (this->_type);
}

void Animal::makeSound() const {}

Animal::~Animal()
{
	std::cout << "An animal died" << std::endl;
}

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "It's a very friendly dog " << std::endl;
}

Dog::Dog(Dog const &old)
{
	*this = old;
}

Dog & Dog::operator=(Dog const &old)
{
	this->_type = old.getType();
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof !" << std::endl;
}

Dog::~Dog()
{
	std::cout << "The dog died" << std::endl;
}

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "It's a cat " << std::endl;
}

Cat::Cat(Cat const &old)
{
	*this = old;
}

Cat & Cat::operator=(Cat const &old)
{
	this->_type = old.getType();
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}

Cat::~Cat()
{
	std::cout << "The cat died" << std::endl;
}

