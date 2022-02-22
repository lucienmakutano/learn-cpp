#include "ptr.hpp"

#include <iostream>

using namespace std;

int *apply_alloc(int *, size_t, int *, size_t);
void print_arr(const int *const, size_t);

void ptr_challenge()
{
    int arr1[]{1, 2, 3, 4, 5};
    int arr2[]{10, 20, 30};

    int *result = apply_alloc(arr1, 5, arr2, 3);
    print_arr(result, 15);
}

int *apply_alloc(int *arr1, size_t arr1_size, int *arr2, size_t arr2_size)
{
    int size = arr1_size * arr2_size;
    int *arr3 = new int[size];
    int counter{0};

    for (size_t i{0}; i < arr1_size; i++)
    {
        for (size_t j{0}; j < arr2_size; j++)
        {
            arr3[counter] = arr1[i] * arr2[j];
            counter++;
        }
    }

    return arr3;
}

void print_arr(const int *const arr, size_t arr_size)
{
    cout << "[";
    for (size_t i{0}; i < arr_size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}