#include "ptr.hpp"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void double_wage(int *wage);

void ptr_work()
{
    int *ptr_age;              // garbage address
    string *ptr_name{nullptr}; // best practice
    vector<int> *ptr_scores{nullptr};

    cout << ptr_age << endl;  // garbage address
    cout << ptr_name << endl; // zero address

    int age = 12;
    string name{"Lucien"};
    vector<int> scores{1, 2, 4, 3, 5};

    ptr_age = &age;
    // ptr_age = &name; // error
    ptr_name = &name;

    cout << "Dereferencing: ptr to name " << *ptr_name << endl;
    cout << "Dereferencing: ptr age " << *ptr_age << endl;
    cout << "Dereferencing: ptr scores" << (*ptr_scores).at(0) << endl;

    //////////////////////////////////////////////////////
    // Dynamic allocation from the heap
    int *ptr_int{nullptr};
    ptr_int = new int;
    /// ...
    // After usage release memory
    delete ptr_int;

    // allocating a contigeous memory dynamically
    int *ptr_ages{nullptr};
    int size{30};
    ptr_ages = new int[size];

    delete[] ptr_ages;

    ///////////////////////////////////////////////////////
    // Relationship between array and pointer
    // Arrays are pointers to the first elements
    // Arrays can be treated a pointers
    int arr[5]{1, 2, 3, 4, 5};
    int *ptr_arr{arr};

    cout << "=======Array and Pointer========" << endl;
    cout << "arr[0] " << arr[0] << endl;
    cout << "ptr_arr[0] " << ptr_arr[0] << endl;
    cout << "*(ptr_arr + 1) " << *(ptr_arr + 1) << endl;
    cout << "*(arr + 1) " << *(arr + 1) << endl;

    ///////////////////////////////////////////////////////
    // Pointer arithmetic
    int ints[]{1, 2, 3, 4, 5};
    int *ptr_int_1{ints};

    // Math
    ptr_int_1 = ptr_int_1 + 2; // 3
    ptr_int_1 = ptr_int_1 - 1; // 2
    ptr_int_1++;               // 3

    // comparing pointers
    // only addresses are compared
    // pointers pointing the same address are equal
    int i{1};
    int j{2};

    int *ptr_i{&i};
    int *ptr_j{&j};
    int *ptr_k{&i};

    cout << "=======Pointer Arithmetic========" << endl;
    cout << "ptr_i == ptr_j" << (ptr_i == ptr_j) << endl; // false
    cout << "ptr_i == ptr_k" << (ptr_i == ptr_k) << endl; // true

    ///////////////////////////////////////////////////////
    // Constant Pointer
    // Pointer to a constant object
    // Can not be dereferenced
    const int *ptr_const_int{&i};
    // *ptr_const_int = 3; // error

    // Constant Pointer
    // The pointer can be allocated a new value
    int *const ptr_const_int_1{&i};
    *ptr_const_int_1 = 3;
    // ptr_const_int_1 = &j; // error

    // constant pointer to a constant object
    const int *const ptr_const_int_2{&i};
    // *ptr_const_int_2 = 3; // error
    // ptr_const_int_2 = &j; // error

    ///////////////////////////////////////////////////////
    // Pointer with function
    int wage{100'000};
    double_wage(&wage);
}

void double_wage(int *wage)
{
    *wage *= 2; // *wage = *wage * 2;
}

int *new_int()
{
    int *i = new int;
    return i;
}

// return a pointer to an array allocated on the heap
string *create_array(size_t size)
{
    string *arr{nullptr};

    arr = new string[size];

    return arr;
}
