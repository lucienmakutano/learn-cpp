#include <cctype>  // deal with char type
#include <cstring> // deal with c-type string type
#include <iostream>

void funcs()
{
    std::cout << isalpha('a') << std::endl;
    std::cout << isalpha('1') << std::endl;
    std::cout << isalnum('a') << std::endl;
    std::cout << isspace(' ') << std::endl;
    std::cout << isdigit('1') << std::endl;
}

void c_style_string()
{
    char name[]{"Lucien"};
    char greet[80];

    strcpy(greet, "Hello, ");
    strcat(greet, name);

    std::cout << greet << std::endl;

    for (size_t i{0}; i < strlen(greet); i++)
    {
        if (isspace(greet[i]))
        {
            greet[i] = '\n';
        }
    }

    std::cout << "=============================" << std::endl;

    // enhanced for loop
    for (char c : greet)
    {
        std::cout << c;

        if (c == '\0')
        {
            break;
        }
    }
    std::cout << std::endl;
}

void cpp_style_string()
{
    std::string name{"Lucien"};
    std::string greet{"Hello, "};

    greet += name;

    std::cout << greet << std::endl;

    for (size_t i{0}; i < greet.size(); i++)
    {
        if (isspace(greet[i]))
        {
            greet[i] = '\n';
        }
    }

    name.substr(0, 3); // return the first 3 chars
    name.find("i");    // returns the index of the first occurence of the character
    name.length();     // returns the length of the string
    name.append("!");  // appends a string to the end of the string
    name.erase(0, 3);  // erases the first 3 characters
}
