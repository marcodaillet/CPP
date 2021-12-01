/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:52:12 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/30 15:17:38 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <list>
#include <algorithm>
#include <iostream>

template <typename T>
class MutantStack;

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator ite;
		typedef typename std::stack<T>::container_type::const_iterator const_ite;
		typedef typename std::stack<T>::container_type::reverse_iterator rev_ite;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_rev_ite;
		
		MutantStack() : std::stack<T>() {};
		MutantStack(const MutantStack &old) : std::stack<T>(old){};
		virtual ~MutantStack() {}
		MutantStack & operator=(const MutantStack &old)
		{
			if (this == &old)
				return (*this);
			std::stack<T>::operator=(old);
			return (*this);
		};

		ite begin() { return (std::stack<T>::c.begin()); }
		const_ite begin() const { return (std::stack<T>::c.begin()); }
		ite end() { return (std::stack<T>::c.end()); }
		const_ite end() const { return (std::stack<T>::c.end()); }
		rev_ite rbegin() { return (std::stack<T>::c.rbegin()); }
		const_rev_ite rbegint() const { return (std::stack<T>::c.rbegin()); }
		rev_ite rend() { return (std::stack<T>::c.rend()); }
		const_rev_ite rend() const { return (std::stack<T>::c.rend()); }
};

#endif
