/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:04:31 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/22 10:20:58 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//  Zombie* zombieHorde(int N, std::string name)


void ft_leaks()
{
    system("leaks zombie");
}
int main()
{
    int n = 4;
    std::string name = "hordes";
    
    ft_leaks();
    Zombie *horde = zombieHorde(n, name);

    for(int i = 0; i < n; i++)
    {
        horde[i].announce();
    }

    delete[] horde;
    return (0);
}


