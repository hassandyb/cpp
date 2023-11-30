/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:04:31 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/30 21:41:27 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    std::string nbr;
    std::string name;
    
    std::cout << "Enter the number of zombies : ";
    if(!std::getline(std::cin, nbr))
        return 0;


    for(unsigned int i = 0; i < nbr.length(); i++)
    {
        if(nbr[i]< '0' || nbr[i] > '9')
        {
            std::cout << "Invalid number" << std::endl;
            return (0);
        }
    }
    int n = std::stoi(nbr);
    
    std::cout << "Enter the name of zombies : ";
    if(!std::getline(std::cin, name))
        return 0;

    Zombie *horde = zombieHorde(n, name);

    for(int i = 0; i < n; i++)
    {
        horde[i].announce();
    }

    delete[] horde;
    return (0);
}


