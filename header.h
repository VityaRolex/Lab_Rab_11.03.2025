
#include <iostream>
void InputSize(int64_t&);
int64_t MaxElement(int64_t*, int64_t);
int64_t MinElement(int64_t*, int64_t);
void RemoveNegativesAndFillZeros(int64_t*, int64_t);
int32_t CountElements(char * , int64_t);
int32_t outputSumOfSimpleElements(int64_t*, int64_t);
int64_t FindMaxElement(int64_t*, int64_t);
int64_t FindMinElement(int64_t*, int64_t);
double CalculateAverage(int64_t*, int64_t);
template<typename Type>
void BubbleSort(Type * Arr, int64_t lenght)
{
    Type temp{};
    int32_t counter{};
    while(counter < lenght - 1)
    {
        if (Arr[counter] > Arr[counter + 1])
        {
            temp = Arr[counter];
            Arr[counter] = Arr[counter+1];
            Arr[counter + 1] = temp;
            counter = -1;
        }
        counter += 1;
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
    Type tmp{};
    for(size_t i = 0; i < size/2; ++i)
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