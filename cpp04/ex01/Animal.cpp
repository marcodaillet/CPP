/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:41:55 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/21 18:24:51 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "An animal was born " << std::endl;
}

Animal::Animal(Animal const &old)
{
	std::cout << "Copy constructor" << std::endl;
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
	this->_brain = new Brain();
	std::cout << "It's a very friendly dog " << std::endl;
}

Dog::Dog(Dog const &old)
{
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain[i] = old._brain[i];
	*this = old;
}

Dog & Dog::operator=(Dog const &old)
{
	this->_type = old.getType();
	for (int i = 0; i < 100; i++)
		this->_brain[i] = old._brain[i];
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof !" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (this->_brain);
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "The dog died" << std::endl;
}

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "It's a cat " << std::endl;
}

Cat::Cat(Cat const &old)
{
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain[i] = old._brain[i];
	*this = old;
}

Cat & Cat::operator=(Cat const &old)
{
	this->_type = old.getType();
	for (int i = 0; i < 100; i++)
		this->_brain[i] = old._brain[i];
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meooww !" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->_brain);
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "The cat died" << std::endl;
}
