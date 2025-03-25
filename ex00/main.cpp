#include "Zombie.hpp"

int main()
{
    Zombie *instance = NULL;

    instance = instance->newZombie("zombie1");
    instance->announce();
    instance->randomChump("zombie2");
    delete instance;
    return 0;
}