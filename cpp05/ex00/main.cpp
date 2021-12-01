/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:59:09 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/24 09:58:49 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bureaucrat = Bureaucrat("Tabernouche", 149);
	std::cout << bureaucrat << std::endl;

	std::cout << "Grade up 10" << std::endl;
	bureaucrat.gradeUp(10);
	std::cout << bureaucrat << std::endl;
	
	std::cout << "Grade down 5" << std::endl;
	bureaucrat.gradeDown(5);
	std::cout << bureaucrat << std::endl;

	std::cout << "Grade down 4" << std::endl;
	bureaucrat.gradeDown(4);
	std::cout << bureaucrat << std::endl;

	std::cout << "Grade down 5" << std::endl;
	bureaucrat.gradeDown(5);
	std::cout << bureaucrat << std::endl;

	return (0);
}
