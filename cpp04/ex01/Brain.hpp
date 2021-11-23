/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:17:21 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/21 18:10:54 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	
	private:
	    std::string _ideas[100];
	    bool 	checkIndex(int index) const;
	public:
    	Brain();
    	Brain(const Brain &copy);
    	Brain &operator=(const Brain &rhs);
    	const std::string getIdea(int index) const;
    	void setIdea(int index, const std::string str);
		~Brain();
};

#endif
