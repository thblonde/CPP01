#include "Zombie.h"

void randomChump(std::string name)
{
    Zombie stack;

    stack.setName(name);
    stack.announce();
}
