#include "Account.hpp"

void Account::deposit(double amount)
{
    balance += amount;
}

void Account::withdraw(double amount)
{
    balance -= amount;
}

void Account::set_balance(double amount)
{
    balance = amount;
}

double Account::get_balance()
{
    return balance;
}
