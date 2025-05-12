#ifndef HUMANB_H
# define HUMANB_H
# include <iostream>
# include <string>
# include "Weapon.h"

// Use a pointer to the weapon
// to allow setting it to NULL by default
// when the human doesn't initially have a weapon

class HumanB
{
public:
    HumanB(std::string name);
    void setWeapon(Weapon *weapon);
    void attack();

private:
    Weapon *weapon;
    std::string name;
};

#endif
