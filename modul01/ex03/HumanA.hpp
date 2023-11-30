/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:34:06 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/29 19:55:16 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP



#include "Weapon.hpp"


class HumanA
{
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanA(std::string name, Weapon & weapn);
        void attack() ;


};

#endif