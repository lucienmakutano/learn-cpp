#include "Constructor.hpp"

User::User()
{
    name = "";
    password = "";
}

// Better way
User::User() : name(""), password("")
{
}

User::User(std::string name, std::string password)
{
    this->name = name;
    this->password = password;
}

// Better way
User::User(std::string name, std::string password)
    : name(name), password(password)
{
}

// Delegating constructor
User::User()
    : User("", "")
{
}

User::User(std::string name)
    : User(name, "")
{
}

void worker()
{
    User user1;
    User user2{"user2"};
    User user3("user3", "password");
}
