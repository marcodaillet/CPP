/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:37:19 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/21 16:13:22 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class Wronganimal
{
	protected:
		std::string _type;
	public:
		Wronganimal();
		Wronganimal(Wronganimal const &old);
		Wronganimal & operator =(Wronganimal const &old);
		std::string getType(void) const;
		void makeSound() const;
		virtual ~Wronganimal();
};

class WrongDog : public Wronganimal
{
	public:
		WrongDog();
		WrongDog(WrongDog const &old);
		WrongDog & operator =(WrongDog const &old);
		void makeSound(void) const;
		~WrongDog();
};

class WrongCat: public Wronganimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &old);
		WrongCat & operator =(WrongCat const &old);
		void makeSound(void) const;
		~WrongCat();
};

#endif
