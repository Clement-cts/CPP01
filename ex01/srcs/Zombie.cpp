#include "../includes/Zombie.hpp"

Zombie::Zombie() : _name("Unnamed") {
    std::cout << "Zombie created" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) {
    std::cout << "Zombie " << _name << " created" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << _name << " destroyed" << std::endl;
}

std::string Zombie::getName(void) {
    return _name;
}

void Zombie::setName(std::string name) {
    _name = name;
}

void Zombie::announce(void) {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}