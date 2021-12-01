/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:29:42 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/30 15:48:12 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main(void)
{
	std::cout << "### USING BASIC STACK FUNCTIONS ###" << std::endl;
	MutantStack<int> s1;
	s1.push(5);
	s1.push(-12);
	s1.push(5686);
	s1.push(1);
	s1.push(2);
	s1.push(17);
	std::stack<int>::container_type::iterator it;
	it = s1.begin();
	std::cout << "The s1 stack : ";
	while (it < s1.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
	std::cout << "Top : " << s1.top() << std::endl;
	std::cout << "Size : " << s1.size() << std::endl;
	std::cout << "Empty : " << s1.empty() << std::endl;

	std::cout << std::endl;
	std::cout << "### Creating a new stack to try and use swap ###" << std::endl;
	MutantStack<int> s2;
	s2.push(34);
	s2.push(12);
	s2.push(22);
	it = s2.begin();
	std::cout << "The s2 stack :";
	while (it < s2.end())
    {
        std::cout << *it << " ";
        it++;
    }
	std::cout << std::endl << "SWAP";
	s1.swap(s2);
	it = s1.begin();
	std::cout << std::endl << "The new s1 stack : ";
	while (it < s1.end())
	{
        std::cout << *it << " ";
        it++;
	}
	it = s2.begin();
	std::cout << std::endl << "The new s2 stack : ";
    while (it < s2.end())
    {
        std::cout << *it << " ";
        it++;
    }
	std::cout << std::endl << "Using pop on the s1 stack: ";
	s1.pop();
	it = s1.begin();
	std::cout << std::endl << "The new s1 stack : ";
	while (it < s1.end())
	{
        std::cout << *it << " ";
        it++;
	}
	std::cout << std::endl;
	std::cout << "Top : " << s1.top() << std::endl;
	std::cout << "Size : " << s1.size() << std::endl;
	std::cout << "Empty function : " << s1.empty() << std::endl;

	std::cout << std::endl;
	std::cout << "### ADDITIONAL TESTS ###" << std::endl;
	std::cout << "Using pop again : ";
	s1.pop();
	it = s1.begin();
	std::cout << std::endl << "The new s1 stack : ";
	while (it < s1.end())
	{
        std::cout << *it << " ";
        it++;
	}
	std::cout << std::endl;
	std::cout << "Top : " << s1.top() << std::endl;
	std::cout << "Size : " << s1.size() << std::endl;
	std::cout << "Empty : " << s1.empty() << std::endl;
	std::cout << "Using pop again : ";
	s1.pop();
	std::cout << std::endl;
	std::cout << "Empty : " << s1.empty() << std::endl;

	return (0);
}
