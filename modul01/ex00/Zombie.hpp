/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:58:22 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/22 10:44:53 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <iostream>



class Zombie 
{
private:
    std::string name;

public:
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
};


Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif