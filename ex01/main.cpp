#include "Zombie.h"

int main()
{
    Zombie *horde = zombieHorde(5, "horde");
    
    delete[] horde;
    return 0;
}
