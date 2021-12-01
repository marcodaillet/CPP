/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:29:42 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/30 13:49:25 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void)
{
	std::cout << "#### MANUALLY ADDING ####" << std::endl;
	span Span(5);
	Span.addNumber(10);
	Span.addNumber(15);
	Span.addNumber(20);
	Span.addNumber(25);
	for (int i = 0; i < Span.getVec().size(); i++)
		std::cout << Span.getVec()[i] << " ";
	std::cout << std::endl << "Shortest span : " << Span.shortestSpan();
	std::cout << std::endl << "Longest span : " << Span.longestSpan();

	std::cout << std::endl << "#### ITERATOR ADDING ####" << std::endl;
	span Span2(10000);
	std::vector<int> range(10000, 0);
	range[500] = 9999;
	range[50] = -98465;
	Span2.addNumber(range.begin(), range.end());
//	for (int i = 0; i < Span2.getVec().size(); i++)
//		std::cout << Span2.getVec()[i] << " ";
	std::cout << "Shortest span : " << Span2.shortestSpan();
	std::cout << std::endl << "Longest span : " << Span2.longestSpan();
	
	std::cout << std::endl << "#### EXCEPTION HANDLING ####" << std::endl;
	span Span3(1);
	try
	{
		Span.addNumber(10);
		Span.addNumber(15);
		Span.addNumber(20);
		Span.addNumber(25);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
	
	try
	{
		std::vector<int> range1(15, 1);
		Span3.addNumber(range1.begin(), range1.end());
	}
	catch (std::exception &e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
	try
	{
		Span3.shortestSpan();
		Span3.longestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
	return (0);
}
