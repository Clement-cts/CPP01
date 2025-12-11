#pragma once
# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {
    public:
        HumanA(const std::string& name, Weapon& weapon);
        void attack() const;

    private:
        std::string _name;
        Weapon& _weapon;
};