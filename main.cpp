#include <iostream>
#include "header.h"

 int main()
 {
  int64_t Arr_of_int[100]{};
  double Arr_of_double[100]{};
  char Arr_of_char[100]{};
  int64_t lenght{};
  int64_t int_element{};
  char char_element{};
  double double_element{};
  int32_t switcher{};
  int32_t switcher_2{};
  std::cout << "Press 1 if you want to work with char array and 2 for work with int array and 3 for work with double array \n";
  std::cin >> switcher;
  while (switcher != 1 && switcher != 2 && switcher != 3)
  {
    std::cout << "Try again \n";
    std::cin >> switcher;
  }
  switch(switcher)
  {
    case 1:
    {
      InputSize(lenght);
      InputArr(Arr_of_char, lenght);
      std::cout << '\n';
      std::cout << "Enter element you need to find \n";
      std::cin >> char_element;
      std::cout << '\n';
      if (FindElement(Arr_of_char, char_element, lenght) != -1)
      {
        std::cout << "Your element is on " << FindElement(Arr_of_char, char_element, lenght) << " position in array" << '\n';
      }
      else
      {
        std::cout << "Your element isn't in array \n";
      }
      if (CountElements(Arr_of_char, lenght) != -1)
      {
        std::cout << "Distance between first and last zeros is " << CountElements(Arr_of_char, lenght) << '\n';
      }
      else
      {
        std::cout << "Array contains 1 or 0 zeros \n";
      }
      std::cout << "Max element is " << FindMaxElement(Arr_of_char, lenght) << " and he is on " << MaxElement(Arr_of_char, lenght) << " position \n";
      std::cout << "Min element is " << FindMinElement(Arr_of_char, lenght) << " and he is on " << MinElement(Arr_of_char, lenght) << " position \n";
      
      std::cout << "Array: \n";
      PrintArray(Arr_of_char, lenght);
      break;
    }
    case 2:
    {
      InputSize(lenght);
      InputArr(Arr_of_int, lenght);
      std::cout << '\n';
      std::cout << "Enter element you need to find \n";
      std::cin >> int_element;
      std::cout << '\n';
      if (FindElement(Arr_of_int, int_element, lenght) != -1)
      {
        std::cout << "Your element is on " << FindElement(Arr_of_int, int_element, lenght) << " position in array" << '\n';
      }
      else
      {
        std::cout << "Your element isn't in array \n";
      }
      if (CountElements(Arr_of_int, lenght) != -1)
      {
        std::cout << "Distance between first and last zeros is " << CountElements(Arr_of_int, lenght) << '\n';
      }
      else
      {
        std::cout << "Array contains 1 or 0 zeros \n";
      }
      std::cout << "Max element is " << FindMaxElement(Arr_of_int, lenght) << " and he is on " << MaxElement(Arr_of_int, lenght) << " position \n";
      std::cout << "Min element is " << FindMinElement(Arr_of_int, lenght) << " and he is on " << MinElement(Arr_of_int, lenght) << " position \n";
      std::cout << "Average is " << CalculateAverage(Arr_of_int, lenght) << '\n';
      std::cout << "Sum of simple elements is " << outputSumOfSimpleElements(Arr_of_int, lenght) << '\n';
      std::cout << "Array: \n";
      PrintArray(Arr_of_int, lenght);
      RemoveNegativesAndFillZeros(Arr_of_int, lenght);
      std::cout << "Array with removed negatives: \n";
      PrintArray(Arr_of_int, lenght);
      std::cout << "Enter 1 if you want to sort array to increase and 2 for sort to decrease \n";
      
      std::cin >> switcher_2;
      while (switcher != 1 && switcher != 2)
    {
        std::cout << "Try again \n";
       std::cin >> switcher_2;
    }
      BubbleSort(Arr_of_int, lenght, switcher_2);
      std::cout << "Sorted Array with removed negatives: \n";
      PrintArray(Arr_of_int, lenght);
      ReverseArray(Arr_of_int, lenght);
      std::cout << " Reversed sorted Array with removed negatives: \n";
      PrintArray(Arr_of_int, lenght);
      break;
    }
    case 3:
    {
      InputSize(lenght);
      InputArr(Arr_of_double, lenght);
      std::cout << '\n';
      std::cout << "Enter element you need to find \n";
      std::cin >> double_element;
      std::cout << '\n';
      if (FindElement(Arr_of_double, double_element, lenght) != -1)
      {
        std::cout << "Your element is on " << FindElement(Arr_of_double, double_element, lenght) << " position in array" << '\n';
      }
      else
      {
        std::cout << "Your element isn't in array \n";
      }
      if (CountElements(Arr_of_double, lenght) != -1)
      {
        std::cout << "Distance between first and last zeros is " << CountElements(Arr_of_double, lenght) << '\n';
      }
      else
      {
        std::cout << "Array contains 1 or 0 zeros \n";
      }
      std::cout << "Max element is " << FindMaxElement(Arr_of_double, lenght) << " and he is on " << MaxElement(Arr_of_double, lenght) << " position \n";
      std::cout << "Min element is " << FindMinElement(Arr_of_double, lenght) << " and he is on " << MinElement(Arr_of_double, lenght) << " position \n";
      std::cout << "Average is " << CalculateAverage(Arr_of_double, lenght) << '\n';
      std::cout << "Array: \n";
      PrintArray(Arr_of_double, lenght);
      RemoveNegativesAndFillZeros(Arr_of_double, lenght);
      std::cout << "Array with removed negatives: \n";
      PrintArray(Arr_of_double, lenght);
      std::cout << "Enter 1 if you want to sort array to increase and 2 for sort to decrease \n";
      
      std::cin >> switcher_2;
      while (switcher != 1 && switcher != 2)
    {
        std::cout << "Try again \n";
       std::cin >> switcher_2;
    }
    BubbleSort(Arr_of_double, lenght, switcher_2);
      std::cout << "Sorted Array with removed zeros: \n";
      PrintArray(Arr_of_double, lenght);
      ReverseArray(Arr_of_double, lenght);
      std::cout << " Reversed sorted Array with removed zeros: \n";
      PrintArray(Arr_of_double, lenght);
      break;
    }
  }
  
  return 0;
 }

