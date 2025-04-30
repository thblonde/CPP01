#include "Weapon.h"

Weapon::Weapon(std::string type) : type(type)
{
    std::cout << "Weapon \"" << type << "\" constructor called" << std::endl;
}

std::string Weapon::getType() const
{
    return type;
}

void Weapon::setType(std::string weaponType)
{
    type = weaponType;
}