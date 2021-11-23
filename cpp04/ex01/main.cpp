/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:59:09 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/21 18:18:36 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main()
{
	std::cout << "CONSTRUCTORS" << std::endl;
	std::cout << "--------------------" << std::endl;
	const Dog* doggo = new Dog();
	const Cat* puss = new Cat();
	std::cout << "--------------------" << std::endl;

	const Animal *array[2];

	array[0] = doggo;
	array[1] = puss;

	Brain*	dogBrain = doggo->getBrain();
	Brain*	catBrain = puss->getBrain();

	std::cout << std::endl << "DEEP COPY" << std::endl;
	std::cout << "--------------------" << std::endl;
	dogBrain->setIdea(0, "I wanna play! Can we play?");
	catBrain->setIdea(0, "I'm hungry");
	const Dog	*dogCopy = new Dog(*doggo);
	const Cat	*catCopy = new Cat(*puss);

	Brain*	dogCopyBrain = dogCopy->getBrain();
	Brain*	catCopyBrain = catCopy->getBrain();

	std::cout << "ORIGINAL" << std::endl;
	std::cout << "Dog brain address: " << &(dogCopyBrain) << std::endl;
	std::cout <<  "Brain content: " << dogBrain->getIdea(0) << std::endl;
	std::cout << "Cat brain address: " << &(dogCopyBrain) << std::endl;
	std::cout <<  "Brain content: " << catBrain->getIdea(0) << std::endl;
	std::cout << "COPY" << std::endl;
	std::cout << "Dog copy brain address: " << &(dogCopyBrain) << std::endl;
	std::cout << "Brain content: " << dogCopyBrain->getIdea(0) << std::endl;
	std::cout << "Cat copy brain address: " << &(dogCopyBrain) << std::endl;
	std::cout <<  "Brain content: " << catCopyBrain->getIdea(0) << std::endl;
	std::cout << std::endl;

	dogBrain->setIdea(0, "Humans are awesome");
	catBrain->setIdea(0, "Don't touch me or I'll get angry");

	std::cout << "ORIGINAL" << std::endl;
	std::cout <<  "Brain content: " << dogBrain->getIdea(0) << std::endl;
	std::cout <<  "Brain content: " << catBrain->getIdea(0) << std::endl;
	std::cout << "COPY" << std::endl;
//	std::cout <<  "Brain content: " << dogCopyBrain->getIdea(0) << std::endl;
//	std::cout <<  "Brain content: " << catCopyBrain->getIdea(0) << std::endl;
	std::cout << "--------------------" << std::endl;

	std::cout << std::endl << "DESTRUCTORS" << std::endl;
	std::cout << "--------------------" << std::endl;
	for (int i = 0; i < 2; i++)
		delete array[i];
	std::cout << "--------------------" << std::endl;

	return 0;
}
