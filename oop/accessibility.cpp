#include "oop.hpp"

#include <iostream>
#include <string>

class Player
{
private: // only accessible from inside the class
    // attributes
    std::string name{""};
    int health{0};
    int xp{0};

public: // accessible from outside the class
    // methods
    void talk(std::string message)
    {
        std::cout << message << std::endl;
    }
    bool is_dead();
};
