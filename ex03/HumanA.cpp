#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon), name(name) {
    std::cout << "HumanA \"" << name << "\" constructor called" << std::endl;
}

void HumanA::attack() {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
