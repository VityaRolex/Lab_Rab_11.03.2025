
#include <iostream>
#include "header.h"
#include <cmath>




void InputSize(int64_t& size)
{
 std::cout << "Input size:\n";
 std::cin >> size;
}

int64_t MaxElement(int64_t* arr, int64_t size)
{
 int64_t maxIndex{};
 for (int64_t i = 1; i < size; ++i)
 {
  if (arr[i] > arr[maxIndex])
  {
   maxIndex = i;
  }
 }
 return maxIndex;
}

int64_t MinElement(int64_t* arr, int64_t size)
{
 int64_t minIndex{};
 for (int64_t i = 1; i < size; ++i)
 {
  if (arr[i] < arr[minIndex])
  {
   minIndex = i;
  }
 }
 return minIndex;
}

void RemoveNegativesAndFillZeros(int64_t* arr, int64_t size)
{
 int posIndex = 0; 
 for (int i = 0; i < size; ++i) {
  if (arr[i] >= 0) {
   arr[posIndex] = arr[i];
   posIndex++;
  }
 }
 for (int i = posIndex; i < size; ++i) {
  arr[i] = 0;
 }
}

int32_t CountElements(char * Arr, int64_t lenght)
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
    return index_of_last_zero - index_of_first_zero - 1;
}


bool isNumberSimple(int64_t number)
{
    if (number <= 0)
    {
        return 0;
    }
    for (size_t i = 2; i <= sqrt(number); ++i)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    if (number == 1)
    {
        return 0;
    }
    return 1;
}


int32_t outputSumOfSimpleElements(int64_t* Arr, int64_t lenght)
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

double CalculateAverage(int64_t* arr, int64_t size)
{
    return (FindMaxElement(arr, size) + FindMinElement(arr, size)) / 2.0;
}

