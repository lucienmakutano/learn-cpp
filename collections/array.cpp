#include "coll.h"

#include <iostream>

void array_work()
{
    int scores[3]{1, 2}; // 3rd element is 0
    char vowels[5]{'a', 'e', 'i', 'o', 'u'};
    std::string names[]{""}; // dynamic loocation of space

    // std::cin >> vowels[5]; // error: array out of bound

    std::cout << scores[2] << std::endl;
    std::cout << names[0] << std::endl;
}