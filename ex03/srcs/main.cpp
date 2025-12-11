#include "../includes/Weapon.hpp"
#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"

int main() {
    Weapon club("crude spiked club");

    HumanA bob("Bob", club);
    bob.attack();

    HumanB jim("Jim");
    jim.attack();
    jim.setWeapon(club);
    jim.attack();

    club.setType("some other type of club");

    bob.attack();
    jim.attack();

    return 0;
}