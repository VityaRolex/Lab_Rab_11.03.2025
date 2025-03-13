#include <iostream>
#include "header.h"

 int main()
 {
  int64_t Arr[100]{};
  int64_t lenght{};
  int64_t element{};
  InputSize(lenght);
  InputArr(Arr, lenght);
  std::cout << '\n';
  std::cin >> element;
  std::cout << FindElement(Arr, element, lenght) << " position" << '\n';
  std::cout << CountElements(Arr, lenght) << '\n';
  std::cout << "Average is " << CalculateAverage(Arr, lenght) << '\n';
  std::cout << "Sum of simple is " << outputSumOfSimpleElements(Arr, lenght) << '\n';
  RemoveNegativesAndFillZeros(Arr, lenght);
  PrintArray(Arr, lenght);
  BubbleSort(Arr, lenght);
  PrintArray(Arr, lenght);
  ReverseArray(Arr, lenght);
  PrintArray(Arr, lenght);
  
  return 0;
 }

