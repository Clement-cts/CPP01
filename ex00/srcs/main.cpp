#include "../includes/Zombies.hpp"

int main() {
    
    Zombie* z = newZombie("heap_Zombie");
    z->announce();

    randomChump("stack_Zombie");

    delete z;
}
