#include <iostream>
#include "header.h"

void PrintArray(int64_t* arr, int64_t size)
{
 for (int i = 0; i < size; ++i)
 {
  std::cout << arr[i] << " ";
 }
}

void InputArr(int64_t* arr, int64_t size)
{
 for (int32_t i = 0; i < size; ++i)
 {
  std::cin >> arr[i];
 }
}

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


