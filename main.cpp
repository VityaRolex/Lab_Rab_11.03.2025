#include <iostream>
#include "header.h"

int main()
{
 const int64_t MAX_SIZE = 100;
 int64_t arr[MAX_SIZE];
 int64_t size{};
 InputSize(size);
 std::cout << "Enter element\n";
 InputArr(arr, size);
 PrintArray(arr, size);
 int64_t maxIndex = MaxElement(arr, size);
 int64_t minIndex = MinElement(arr, size);
 std::cout << "\n" << "maximum value index " << maxIndex << " " << arr[maxIndex]<< "\n";
 std::cout << "maximum value index " << minIndex << " " << arr[minIndex] << "\n";
 RemoveNegativesAndFillZeros(arr, size);
 std::cout << "Function implementation: ";
 PrintArray(arr, size); 

 return 0;
}