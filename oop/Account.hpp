#ifndef _OOP_ACCOUNT_H_
#define _OOP_ACCOUNT_H_

#include <string>

class Account
{
private: // only accessible from inside the class
    // attributes
    std::string name;
    double balance;

public: // accessible from outside the class
    // methods
    void deposit(double);
    void withdraw(double);
    void set_balance(double);
    
    double get_balance();
};

#endif