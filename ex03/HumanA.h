#ifndef HUMANA_H
# define HUMANA_H
# include <iostream>
# include <string>
# include "Weapon.h"

class HumanA {
    public:
        HumanA(std::string name, Weapon &weapon);
        void attack();
    private:
        Weapon& weapon;
        std::string name;
};

#endif
