
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