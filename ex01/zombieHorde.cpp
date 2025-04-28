#include "Zombie.h"

Zombie *zombieHorde(int n, std::string name)
{
    Zombie *zombieHorde;

    zombieHorde = new Zombie[n];
    while (--n >= 0) {
        zombieHorde[n].setName(name);
        zombieHorde[n].announce();
    }
    return zombieHorde;
}