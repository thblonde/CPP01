#include "HumanB.h"

HumanB::HumanB(std::string name) : weapon(nullptr), name(name)
{
    std::cout << "HumanB \"" << name << "\" constructor called" << std::endl;
}

void HumanB::attack()
{
    if (weapon == nullptr)
        std::cout << name << " has no weapon" << std::endl;
    else
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon *newWeapon)
{
    weapon = newWeapon;
}