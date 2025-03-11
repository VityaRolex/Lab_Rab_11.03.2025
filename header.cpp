#include <iostream>
#include "header.h"

int64_t FindMaxElement(int64_t* arr)
{
    int64_t maxElement{};
    int64_t size = sizeof(arr)/sizeof(arr[0]);
    for (size_t i = 0; i <= size; ++i) 
    {
        if (arr[i] > maxElement) 
        {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int64_t FindMinElement(int64_t* arr)
{
    int64_t minElement{};
    int64_t size = sizeof(arr)/sizeof(arr[0]);
    for (size_t i = 0; i <= size; ++i) 
    {
        if (arr[i] < minElement) 
        {
            minElement = arr[i];
        }
    }
    return minElement;
}

int64_t CalculateAverage(int64_t* arr)
{
    return (FindMaxElement(arr) + FindMinElement(arr)) / 2;
}