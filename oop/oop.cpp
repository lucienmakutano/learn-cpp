#include "oop.hpp"

#include <iostream>
#include <string>
#include <vector>

class Player
{
public:
    // attributes
    std::string name;
    int health;
    int xp;

public:
    // methods
    void talk(std::string message)
    {
        std::cout << message << std::endl;
    }
    bool is_dead();
};

class Account
{
    // attributes
    std::string name;
    double balance;

    // methods
    void deposit(double amount);
    void withdraw(double amount);
};

void oop_work()
{
    Player frank;
    Player hero;

    Player *enemy = new Player;
    (*enemy).name = "Dragon";
    enemy->health = 100;
    (*enemy).xp = 5;
    enemy->talk("I'm a dragon");
    delete enemy;

    Account frank_acc;
    Account james_acc;

    Account accs[]{frank_acc, james_acc};
    std::vector<Account> accs_vec;

    accs_vec.push_back(frank_acc);
    accs_vec.push_back(james_acc);
}
