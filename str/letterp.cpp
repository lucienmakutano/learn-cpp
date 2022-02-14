#include <string>
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

string join(vector<string> v);

struct letterp
{
    /* data */
};

string letter_pyramid(string str)
{
    string result{};
    int level{1};

    for (size_t i{0}; i < str.length(); i++)
    {

        result
            .append(str.substr(0, i + 1));

        result
            .append(result.substr(i, level - 1));

        level++;
    }

    for (size_t i{0}; i < result.length() - 1; i++)
    {
        if (result.at(i) == result.at(i + 1))
        {
            cout << result.substr(0, i + 1) << endl;
            result.erase(0, i + 1);
        }
    }

    return result;
}

string join(vector<string> v)
{
    string result{""};
    int count{0};

    for (string str : v)
    {
        result.append(str);
        result.append(" ");
    }

    return result;
}
