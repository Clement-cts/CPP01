#include "../includes/Harl.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cerr << "Usage: ./harlFilter <level>" << std::endl;
        return 1;
    }
    std::string level = av[1];
    Harl harl;

    int index = -1;
    const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++) {
        if (level == levels[i]){
            index = i;
            break;
        }
    }
    switch (index) {
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problem ]" << std::endl;
    }
    return 0;
}