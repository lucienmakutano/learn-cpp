#ifndef _OOP_CONSTRUCTOR_HPP_
#define _OOP_CONSTRUCTOR_HPP_

#include <string>

class User
{
private:
    std::string name;
    std::string password;

public:
    User();                                      // default constructor
    User(std::string name);                      // constructor with parameter
    User(std::string name, std::string balance); // constructor with parameters

    ~User(); // destructor
};

#endif
