/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:21:15 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/22 10:21:19 by hed-dyb          ###   ########.fr       */
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
    Zombie();
    ~Zombie();
    void announce(void);
    void ft_setname(std::string str);
};

Zombie* zombieHorde(int N, std::string name);


#endif