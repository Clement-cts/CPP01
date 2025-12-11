#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <string>

class Harl {
    public:
        Harl();
        ~Harl();
        void complain(std::string level);

    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

        typedef void (Harl::*HarlFn)();
        static const std::string _name[4];
        static const HarlFn _array[4];
};

#endif