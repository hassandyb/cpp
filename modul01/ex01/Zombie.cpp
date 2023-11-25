/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:21:38 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/22 10:21:42 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {};
Zombie::~Zombie() {};

void Zombie::announce(void)
{

    std::cout << this->name << ":";
    std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::ft_setname(std::string str)
{
    this->name = str;
}