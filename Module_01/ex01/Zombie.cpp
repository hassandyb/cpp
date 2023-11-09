


#include "Zombie.hpp"

Zombie::Zombie() {};
Zombie::~Zombie() {};

void Zombie::announce(void)
{

    std::cout << this->name << ":";
    std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::ft_setname(std::string str)
{
    this->name = str;
}
