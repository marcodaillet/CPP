/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:29:42 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/26 12:45:59 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	Base *baseC = new C();
	std::cout << "Just manually checking that we can identify a class " << std::endl;
	identify(baseC);
	identify(*baseC);

	std::cout << "Now generating a random base" << std::endl;
	Base *base = generate();
	identify(base);
	identify(*base);
	return (0);
}
