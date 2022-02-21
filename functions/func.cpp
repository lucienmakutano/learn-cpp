#include "func.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print_vector(vector<string> v);
void print_vector(vector<int> v = {1, 2, 3, 4, 5});
void print_array(int arr[], size_t size);       // mutable
void print_array(const int arr[], size_t size); // immutable
void pass_by_ref(int &num);                     // mutable
void pass_by_const_ref(const int &num);         // immutable
void swap(int &a, int &b);
void scopes();

void print_vector(vector<string> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

// function overloading + default arguments
void print_vector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

// In this case the function can modify the array elements
void print_array(int arr[], size_t size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
        arr[i] = i;
    }
}

// To protect ourselves from modifying the array elements,
// we can use `const` to make the array a read-only array
void print_array(const int arr[], size_t size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

void pass_by_ref(int &num)
{
    num = num + 1;
}

void pass_by_const_ref(const int &num) // immutable
{
    // num = num + 1; // error
    cout << num << endl;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void scopes()
{
    int a = 10;

    {
        int a = 20;
        cout << a << endl; // 20
    }
    cout << a << endl; // 10
}

void func_work()
{

    vector<string> v;
    v.push_back("Hello");
    v.push_back("World");
    v.push_back("!");

    print_vector(v);
    print_vector();
}
