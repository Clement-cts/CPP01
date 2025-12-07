#include "../includes/Zombies.hpp"

Zombie::Zombie(std::string name) : _name(name) {
    std::cout << "Zombie " << _name << " creates!" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << _name << " dies!" << std::endl;
}

void Zombie::announce(void) {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
