#include "Zombie.h"

void Zombie::announce() const {
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << name << " is destroyed." << std::endl;
}

void Zombie::setName(std::string zombieName) {
    name = zombieName;
}
