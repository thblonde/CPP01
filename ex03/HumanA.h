#ifndef HUMANA_H
# define HUMANA_H
# include <iostream>
# include <string>
# include "Weapon.h"

// Pass the weapon by reference
// to modify it directly
// instead of passing it by value

class HumanA
{
public:
    HumanA(std::string name, Weapon &weapon);
    void attack();

private:
    Weapon& weapon;
    std::string name;
};

#endif
