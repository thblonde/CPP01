#include "Zombie.h"

int main(void)
{
    Zombie *heap;

    heap = newZombie("heap");
    heap->announce();
    delete heap;
    randomChump("stack");
    return 0;
}