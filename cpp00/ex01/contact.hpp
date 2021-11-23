/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:21:54 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/12 08:52:29 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class contact
{

public:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	contact(void);
	~contact(void);
};

#endif
