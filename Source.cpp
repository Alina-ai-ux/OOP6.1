#include <iostream>
#include "Array.h"
#include <time.h>
Array returnDynamicArray(int arr[], const int size);
int main()
{
    srand((unsigned)time(NULL));
    const int size = 49;
    int arr[size];

    for (int i = 0; i < size; i++)
        arr[i] = -50 + rand() % int(50 - (-50) + 1);
    Array Array = returnDynamicArray(arr, size);
    Array.Print();
    cout << endl;
    cout << "The sum of the elements: " << Array.Sum() << endl;
    cout << "Arithmetic mean: " << Array.arithmetic() << endl;
    cout << endl;
    cout << "Multiply each element of the array by " << Array.Min() << endl;
    Array.Multiplication();
    Array.Print();
    cout << endl;
    return 0;
}
Array returnDynamicArray(int arr[], const int size)
{
    Array dynamicArray = Array(size);
    for (int i = 0; i < size; i++)
        dynamicArray[i] = arr[i];
    return dynamicArray;
}
