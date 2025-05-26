#include "Zombie.h"

Zombie *newZombie(std::string name) {
    Zombie  *heap;

    heap = new Zombie;
    heap->setName(name);
    return heap;
}
