#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>
# include <string>

class Weapon
{
public:
    Weapon(std::string type);
    std::string getType() const;
    void setType(std::string weaponType);

private:
    std::string type;
};

#endif
