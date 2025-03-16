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
  std::cout << "Enter element you need to find \n";
  std::cin >> element;
  std::cout << '\n';
  if (FindElement(Arr, element, lenght) != -1)
  {
    std::cout << "Your element is on " << FindElement(Arr, element, lenght) << " position in array" << '\n';
  }
  else
  {
    std::cout << "Your element isn't in array \n";
  }
  if (CountElements(Arr, lenght) != -1)
  {
    std::cout << "Distance between first and last zeros is " << CountElements(Arr, lenght) << '\n';
  }
  else
  {
    std::cout << "Array contains 1 or 0 zeros \n";
  }
  std::cout << "Average is " << CalculateAverage(Arr, lenght) << '\n';
  std::cout << "Sum of simple elements is " << outputSumOfSimpleElements(Arr, lenght) << '\n';
  std::cout << "Array: \n";
  PrintArray(Arr, lenght);
  RemoveNegativesAndFillZeros(Arr, lenght);
  std::cout << "Array with removed negatives: \n";
  PrintArray(Arr, lenght);
  BubbleSort(Arr, lenght);
  std::cout << "Sorted Array with removed zeros: \n";
  PrintArray(Arr, lenght);
  ReverseArray(Arr, lenght);
  std::cout << " Reversed sorted Array with removed zeros: \n";
  PrintArray(Arr, lenght);
  return 0;
 }

