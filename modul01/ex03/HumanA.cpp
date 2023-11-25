/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:22:51 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/22 10:23:26 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) {
    this->name = name;
    this->weapon = &weapon;
}

void HumanA::attack() 
{
    std::cout << this->name << " attacks with their ";
    std::cout << this->weapon->getType() << std::endl;
}