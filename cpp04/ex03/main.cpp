/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:41:58 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/23 12:34:32 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

int main()
{
	std::cout << "---------MATERIA PART-----------" << std::endl;
	Ice *ice = new Ice();
	Cure *cure = new Cure();
	
	std::cout << "Ice type --> " << ice->getType() << std::endl;
	std::cout << "Cure type --> " << cure->getType() << std::endl;

	AMateria *iceClone = ice->clone();
	AMateria *cureClone = cure->clone();

	std::cout << "Ice clone type --> " << iceClone->getType() << std::endl;
	std::cout << "Cure clone type --> " << cureClone->getType() << std::endl;
	std::cout << std::endl;
	
	delete iceClone;
	delete cureClone;

	std::cout << "---------Character PART-----------" << std::endl;

	Rogue rogue = Rogue("Jean Michel");
	Priest priest = Priest("Titouan");

	std::cout << "Rogue's name --> " << rogue.getName() << std::endl;
	std::cout << "Priest's name--> " << priest.getName() << std::endl;

	Rogue *rogueOther = new Rogue();
	Priest *priestOther = new Priest();

	std::cout << "Other Rogue's name --> " << rogueOther->getName() << std::endl;
	std::cout << "Other Priest's name--> " << priestOther->getName() << std::endl;
	std::cout << std::endl;
	
	std::cout << "---------IMateriaSouce PART-----------" << std::endl;
	
	MagicBook *book = new MagicBook();
	book->learnMateria(ice);
	book->learnMateria(cure);

	AMateria *tmp;
	tmp = book->createMateria("ice");
	rogue.equip(tmp);
	tmp = book->createMateria("cure");
	priest.equip(tmp);
	tmp = book->createMateria("ice");
	priest.equip(tmp);
	
	rogue.use(0, *rogueOther);
	priest.use(0, rogue);
	priest.use(1, *priestOther);

	delete rogueOther;
	delete priestOther;
}
