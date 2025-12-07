#include "../includes/Zombies.hpp"

void randomChump(std::string name) {
    Zombie z(name);
    z.announce();
}