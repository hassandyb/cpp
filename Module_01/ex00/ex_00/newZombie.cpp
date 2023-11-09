





#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *heap_zombie = new Zombie(name);
    return (heap_zombie);
}


