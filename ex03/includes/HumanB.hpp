#pragma once
# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB {
    public:
        HumanB(const std::string& name);
        void setWeapon(Weapon& newWeapon);
        void attack() const;

    private:
    std::string _name;
    Weapon* _weapon;
};