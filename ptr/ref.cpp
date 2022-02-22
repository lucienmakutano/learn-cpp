#include "ptr.hpp"

#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

void ref_work()
{
    vector<string> v{"Luc", "Mak", "Nzal"};

    for (auto str : v)
        str = "Funny";

    for (auto str : v)
        cout << str << endl;

    // reference elements in a vector
    for (auto &str : v)
        str = "Funny";

    // for (auto const &str : v)
    //    str = "Funny"; // error

    for (auto str : v)
        cout << str << endl;

    int num = 0;
    int &ref_num = num;

    num = 20;
    cout << "num " << num << endl;
    cout << "ref_num " << ref_num << endl;

    ref_num = 10;
    cout << "num " << num << endl;
    cout << "ref_num " << ref_num << endl;

    // int &num = 100; // error must be an lvalue
    // int &num = num; // error must be an lvalue
}
