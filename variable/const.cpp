#include <iostream>

#include "var.h"

void const_work()
{
    const float price_per_room{100.0};
    const float sales_tax_rate{0.06};
    const float price_with_tax{1 + sales_tax_rate};

    std::string name{""};
    int rooms{0};

    std::cout << "Hello, Welcome to Frank's carpet cleaning service" << std::endl;
    std::cout << "Please enter your name: ";
    std::cin >> name;
    std::cout << "How many rooms would you like cleaned today? ";
    std::cin >> rooms;

    std::cout << "Thank you " << name << " for your business" << std::endl;
    std::cout << "We will clean " << rooms << " rooms for you" << std::endl;
    std::cout << "Estmate for the service per room: $" << price_per_room << std::endl;
    std::cout << "Total estimate: $" << rooms * price_per_room << std::endl;
    std::cout << "Estimate tax rate: " << sales_tax_rate << std::endl;
    std::cout << "Tax amount: $" << rooms * price_per_room * sales_tax_rate << std::endl;
    std::cout << "Total estimate with tax: $" << (rooms * price_per_room) * price_with_tax << std::endl;
}

void const_challenge()
{
    const double price_for_small_room{25.0};
    const double price_for_big_room{35.0};
    const float sales_tax_rate{0.06};
    const short estimate_valide{30};

    short int small_rooms{0};
    short int big_rooms{0};

    std::cout << "Hello, Welcome to Frank's carpet cleaning service" << std::endl;
    std::cout << "Please enter the number of small rooms: ";
    std::cin >> small_rooms;
    std::cout << "Please enter the number of big rooms: ";
    std::cin >> big_rooms;

    std::cout << "Estamte for carpet cleaning" << std::endl;
    std::cout << "Number of small rooms: " << small_rooms << std::endl;
    std::cout << "Number of big rooms: " << big_rooms << std::endl;
    std::cout << "Price for small room: $" << price_for_small_room << std::endl;
    std::cout << "Price for big room: $" << price_for_big_room << std::endl;
    std::cout << "Small rooms: $" << small_rooms * price_for_small_room << std::endl;
    std::cout << "Big rooms: $" << big_rooms * price_for_big_room << std::endl;
    std::cout << "Total estimate: $" << (small_rooms * price_for_small_room) + (big_rooms * price_for_big_room) << std::endl;
    std::cout << "Sales tax: $" << ((small_rooms * price_for_small_room) + (big_rooms * price_for_big_room)) * sales_tax_rate << std::endl;

    std::cout << "===========================================================" << std::endl;
    std::cout << "Total estimate with tax: $"
              << ((small_rooms * price_for_small_room) +
                  (big_rooms * price_for_big_room)) +
                     (((small_rooms * price_for_small_room) +
                       (big_rooms * price_for_big_room)) *
                      sales_tax_rate)
              << std::endl;
    std::cout << "Esitmate valid for " << estimate_valide << "days" << std::endl;
}
