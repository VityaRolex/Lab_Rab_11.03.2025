#include <iostream>
#include <cmath>
#include "header.h"


int32_t CountElements(char * Arr, int32_t lenght)
{
    int32_t result{};
    int32_t index_of_first_zero{};
    int32_t index_of_last_zero{};
    bool is_zero_first{1};
    for (size_t i = 0; i < lenght; ++i)
    {
        if (Arr[i] == '0' && is_zero_first)
        {
            index_of_first_zero = i;
            is_zero_first = 0;
        }
        if (Arr[i] == '0')
        {
            index_of_last_zero = i;
        }
    }
    if (is_zero_first || index_of_last_zero- index_of_first_zero < 0)
    {
        return -1;
    }
    return index_of_last_zero - index_of_first_zero;
}


int32_t CountElements(double * Arr, int32_t lenght)
{
    int32_t result{};
    int32_t index_of_first_zero{};
    int32_t index_of_last_zero{};
    bool is_zero_first{1};
    for (size_t i = 0; i < lenght; ++i)
    {
        if (Arr[i] == 0 && is_zero_first)
        {
            index_of_first_zero = i;
            is_zero_first = 0;
        }
        if (Arr[i] == 0)
        {
            index_of_last_zero = i;
        }
    }
    if (is_zero_first || index_of_last_zero- index_of_first_zero < 0)
    {
        return -1;
    }
    return index_of_last_zero - index_of_first_zero;
}


int32_t CountElements(int32_t * Arr, int32_t lenght)
{
    int32_t result{};
    int32_t index_of_first_zero{};
    int32_t index_of_last_zero{};
    bool is_zero_first{1};
    for (size_t i = 0; i < lenght; ++i)
    {
        if (Arr[i] == 0 && is_zero_first)
        {
            index_of_first_zero = i;
            is_zero_first = 0;
        }
        if (Arr[i] == 0)
        {
            index_of_last_zero = i;
        }
    }
    if (is_zero_first || index_of_last_zero- index_of_first_zero < 0)
    {
        return -1;
    }
    return index_of_last_zero - index_of_first_zero;
}


bool isNumberSimple(int32_t number)
{
    for (size_t i = 2; i < sqrt(number); ++i)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}


int32_t outputSumOfSimpleElements(int32_t* Arr, int32_t lenght)
{
    int32_t result{};
    for (size_t i = 0; i < lenght; ++i)
    {
        if (isNumberSimple(Arr[i]))
        {
            result += Arr[i];
        }
    }
    return result;
}
int64_t FindMaxElement(int64_t* arr, int64_t size)
{
    int64_t maxElement{arr[0]};
    for (size_t i = 0; i < size; ++i) 
    {
        if (arr[i] > maxElement) 
        {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int64_t FindMinElement(int64_t* arr, int64_t size)
{
    int64_t minElement{arr[0]};
    for (size_t i = 0; i < size; ++i) 
    {
        if (arr[i] < minElement) 
        {
            minElement = arr[i];
        }
    }
    return minElement;
}

int64_t CalculateAverage(int64_t* arr, int64_t size)
{
    return (FindMaxElement(arr, size) + FindMinElement(arr, size)) / 2.0;
}