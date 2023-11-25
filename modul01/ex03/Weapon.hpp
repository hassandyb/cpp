/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:28:38 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/22 10:28:51 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <iostream>


class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        const std::string & getType();
        void setType(std::string new_type);

};


#endif