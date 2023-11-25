/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:29:15 by hed-dyb           #+#    #+#             */
/*   Updated: 2023/11/21 13:41:16 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    ft_toupper(char *str)
{
    int j = 0;
    while(str && str[j])
    {
        std::cout << static_cast<char>(std::toupper(str[j]));
        j++;
    }
}

int main (int argc, char **argv)
{
	int i;

    i = 1;
    if(argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return 0;
    }
    else
    {
        while(argv && argv[i])
        {
            ft_toupper(argv[i]);
            i++;
        }
        std::cout << "\n";
    }
    
}


