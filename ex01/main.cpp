#include "Zombie.h"

int main(void)
{
    Zombie *horde(0);

    horde = zombieHorde(10, "horde");
    delete[] horde;
    return 0;
}