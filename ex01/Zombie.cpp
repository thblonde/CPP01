#include "Zombie.h"

void Zombie::announce() const
{
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << ": Destroyed" << std::endl;
}

void Zombie::setName(std::string zombieName)
{
    name = zombieName;
}