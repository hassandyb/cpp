

#include "Weapon.hpp"



Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon() {}


const std::string Weapon::getType(void)
{
    return(this->type);
}

void Weapon::setType(std::string newtype)
{
    this->type = newtype;
}

