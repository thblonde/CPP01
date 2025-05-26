#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>
# include <iostream>

class Zombie {
    public:
        ~Zombie();
        void announce() const;
        void setName(std::string zombieName);
    private:
        std::string name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
