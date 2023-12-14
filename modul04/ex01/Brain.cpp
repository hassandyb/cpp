/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:42:50 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/12/14 22:24:14 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Canonical form : ---------------------------------------------

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = "default_idea";
}

Brain::Brain(const Brain & other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain & Brain::operator=(const Brain & other)
{
	std::cout << "Brain assignement operator called" << std::endl;
	if(this != &other)
	{
		for(int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}