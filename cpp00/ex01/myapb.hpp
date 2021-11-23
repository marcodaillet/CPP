/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myapb.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaillet <mdaillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:19:14 by mdaillet          #+#    #+#             */
/*   Updated: 2021/11/12 08:58:13 by mdaillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYAPB_HPP
#define MYAPB_HPP
#include "contact.hpp"

class myapb {

public:
	contact contacts[8];
	int	nb_contacts;

	myapb ( void );
	~myapb ( void );

	void	ft_add( void );
	void	ft_search ( void );
};

#endif
