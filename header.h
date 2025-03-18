
#include <iostream>
void InputSize(int64_t&);
int32_t CountElements(char * , int64_t);
int32_t outputSumOfSimpleElements(int64_t*, int64_t);

template<typename Type>
bool decrease(Type element_1, Type element_2)
{
    if (element_1 >= element_2)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
    return element_1 >= element_2;
}


template<typename Type>
bool increase(Type element_1, Type element_2)
{
    if (element_1 <= element_2)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
    return element_1 <= element_2;
} 


template<typename Type>
void BubbleSort(Type* Arr, int64_t lenght, bool (*func)(Type, Type))
{
    Type temp{};
    for (int32_t i = 0; i < lenght; ++i)
    {
        for (int32_t j = 0; j < lenght-1; ++j)
        {
            if (!func(Arr[j], Arr[j+1]) == true)
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
        }
    }
}

template<typename Type>
int32_t CountElements(Type * Arr, int64_t lenght)
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
    return index_of_last_zero - index_of_first_zero - 1;
}

template<typename Type>
Type FindElement(Type* arr, Type element, int64_t size)
{
    for(size_t i = 0; i < size; ++i)
    {
        if(arr[i] == element)
        {
            return i + 1;
        }
    }
    return -1;
}

template<typename Type>
void ReverseArray(Type* arr, int64_t size)
{
    int64_t lenght_of_for{size/2};
    Type tmp{};
    for(size_t i = 0; i < lenght_of_for; ++i)
    {
        tmp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = tmp;
    }

}

template<typename Type>
void PrintArray(Type* Arr, int64_t lenght)
{
    for (int32_t i = 0; i < lenght; ++i)
    {
        std::cout << Arr[i] << ' ';
    }
    std::cout << '\n';
}

template<typename Type>
void InputArr(Type* arr, int64_t size)
{
 for (int32_t i = 0; i < size; ++i)
 {
  std::cout << "Enter element number " << i + 1 << ": \n";
  std::cin >> arr[i];
 }
}

template<typename Type>
void RemoveNegativesAndFillZeros(Type* arr, int64_t size)
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

template<typename Type>
Type FindMaxElement(Type* arr, int64_t size)
{
    Type maxElement{arr[0]};
    for (size_t i = 0; i < size; ++i) 
    {
        if (arr[i] > maxElement) 
        {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

template<typename Type>
Type FindMinElement(Type* arr, int64_t size)
{
    Type minElement{arr[0]};
    for (size_t i = 0; i < size; ++i) 
    {
        if (arr[i] < minElement) 
        {
            minElement = arr[i];
        }
    }
    return minElement;
}


template<typename Type>
double CalculateAverage(Type* arr, int64_t size)
{
    return (FindMaxElement(arr, size) + FindMinElement(arr, size)) / 2.0;
}


template<typename Type>
int64_t MaxElement(Type* arr, int64_t size)
{
 int64_t maxIndex{};
 for (int64_t i = 1; i < size; ++i)
 {
  if (arr[i] > arr[maxIndex])
  {
   maxIndex = i;
  }
 }
 return maxIndex + 1;
}

template<typename Type>
int64_t MinElement(Type* arr, int64_t size)
{
 int64_t minIndex{};
 for (int64_t i = 1; i < size; ++i)
 {
  if (arr[i] < arr[minIndex])
  {
   minIndex = i;
  }
 }
 return minIndex + 1;
}
