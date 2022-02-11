#include "var.h"
#include <iostream>
#include <climits>

// whole number
char initial{'a'};
unsigned short score{60};
int represented_countries{45};
long population{1000000};
long long people_on_earth{7'000'000'000};
int *age;

// floating point
float pi{3.14};

double e{2.71828};

long double euler_constant{2.7182818284590452353602874};

// boolean type
bool game_over{false};

void variable_work()
{
    std::cout << "Size of types in byte" << std::endl;
    std::cout << sizeof(initial) << std::endl;
    std::cout << sizeof(score) << std::endl;
    std::cout << sizeof(represented_countries) << std::endl;
    std::cout << sizeof(population) << std::endl;
    std::cout << sizeof(people_on_earth) << std::endl;
    std::cout << sizeof(age) << std::endl;
    std::cout << sizeof(pi) << std::endl;
    std::cout << sizeof(e) << std::endl;
    std::cout << sizeof(euler_constant) << std::endl;
    std::cout << sizeof(game_over) << std::endl;

    std::cout << "Max values" << std::endl;
    std::cout << "char: " << CHAR_MAX << std::endl;
    std::cout << "short: " << SHRT_MAX << std::endl;
    std::cout << "int: " << INT_MAX << std::endl;
    std::cout << "long: " << LONG_MAX << std::endl;
    std::cout << "long long: " << LLONG_MAX << std::endl;

    std::cout << "Min values" << std::endl;
    std::cout << "char: " << CHAR_MIN << std::endl;
    std::cout << "short: " << SHRT_MIN << std::endl;
    std::cout << "int: " << INT_MIN << std::endl;
    std::cout << "long: " << LONG_MIN << std::endl;
    std::cout << "long long: " << LLONG_MIN << std::endl;
}
