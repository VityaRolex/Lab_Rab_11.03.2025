#include <iostream>
#include "header.h"
 int main()
 {
    const int64_t size = 5;
    int64_t numbers[size]{1,2,3,4,5};
    std::cout << CalculateAverage(numbers, size); 
    return 0;
 }