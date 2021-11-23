/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:37:19 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/21 18:15:22 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(Animal const &old);
		Animal & operator =(Animal const &old);
		std::string getType(void) const;
		virtual void makeSound() const;
		virtual ~Animal();
};

class Dog : public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(Dog const &old);
		Dog & operator =(Dog const &old);
		Brain *getBrain(void) const;
		void makeSound(void) const;
		~Dog();
};

class Cat : public Animal
{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(Cat const &old);
		Cat & operator =(Cat const &old);
		Brain *getBrain(void) const;
		void makeSound(void) const;
		~Cat();
};

#endif
