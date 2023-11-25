/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:20:40 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/22 10:20:44 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



Zombie* zombieHorde(int N, std::string name)
{
    Zombie *horde = new Zombie[N];

    for(int i = 0; i < N; i++)
    {
        horde[i].ft_setname(name);
    }

    return (horde);
}
