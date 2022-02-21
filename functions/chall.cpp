#include "func.h"

#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

void display_options(char &choice);
void print_numbers(const vector<int> &numbers);
void add_number(vector<int> &v, int num);
void display_mean(const vector<int> &numbers);
void display_smallest(const vector<int> numbers);
void display_largest(const vector<int> numbers);
void handle_quit();
void handle_unknown(char &choice);

void func_challenge()
{
    char choice{'\0'};
    vector<int> numbers;

    do
    {
        display_options(choice);
        toupper(choice);

        switch (choice)
        {
        case 'P':
        {
            print_numbers(numbers);
            break;
        }
        case 'A':
        {
            int n{0};
            cout << "Enter a number: ";
            cin >> n;

            add_number(numbers, n);
            break;
        }
        case 'M':
        {
            display_mean(numbers);
            break;
        }
        case 'S':
        {
            display_smallest(numbers);
            break;
        }
        case 'L':
        {
            display_largest(numbers);
            break;
        }
        case 'Q':
        {
            handle_quit();
        }
        default:
            handle_unknown(choice);
        }
    } while (choice != 'Q');
}

void display_options(char &choice)
{
    cout << "Welcome to our program" << endl;
    cout << "======================" << endl;
    cout << "P. Print numbers" << endl;
    cout << "A. Add number" << endl;
    cout << "M. Display mean" << endl;
    cout << "S. Display smallest number" << endl;
    cout << "L. Display largest number" << endl;
    cout << "Q. Quit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;
}

void print_numbers(const vector<int> &numbers)
{
    if (numbers.empty())
    {
        cout << "[]" << endl;
    }
    else
    {
        cout << "[";
        for (size_t num : numbers)
        {
            cout << num << ", ";
        }
        cout << "]" << endl;
    }
}

void add_number(vector<int> &v, int num)
{
    v.push_back(num);
}

void display_mean(const vector<int> &numbers)
{
    try
    {
        double total{0};
        for (int num : numbers)
        {
            total = total + num;
        }

        cout << "Mean: " << total / numbers.size() << endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void display_smallest(const vector<int> numbers)
{
    try
    {
        int smallest{numbers.at(0)};

        for (auto num : numbers)
        {
            if (num < smallest)
                smallest = num;
        }

        cout << "Smallest: " << smallest << endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void display_largest(const vector<int> numbers)
{
    try
    {
        int largest{numbers.at(0)};

        for (auto num : numbers)
        {
            if (num > largest)
                largest = num;
        }

        cout << "Largest: " << largest << endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void handle_quit()
{
    cout << "Thank you for using our program" << endl;
    cout << "Program terminated" << endl;
    exit(0);
}

void handle_unknown(char &choice)
{
    cout << "Unknown option." << endl;
}