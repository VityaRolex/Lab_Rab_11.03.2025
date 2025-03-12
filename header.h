
#include <iostream>
void PrintArray(int64_t*, int64_t);
void InputArr(int64_t*, int64_t);
void InputSize(int64_t&);
int64_t MaxElement(int64_t*, int64_t);
int64_t MinElement(int64_t*, int64_t);
void RemoveNegativesAndFillZeros(int64_t*, int64_t);
int32_t CountElements(char * , int32_t );
int32_t CountElements(double * , int32_t);
int32_t CountElements(int32_t * , int32_t);
int32_t outputSumOfSimpleElements(int32_t*, int32_t);
template<typename Type>
void BubbleSort(Type * Arr, int32_t lenght)
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

int64_t FindMaxElement(int64_t*);
int64_t FindMinElement(int64_t*);
int64_t CalculateAverage(int64_t*);

template<typename Type>
Type FindElement(Type* arr, Type element)
{
    int64_t size = sizeof(arr)/sizeof(arr[0]);
    for(size_t i = 0; i <= size; ++i)
    {
        if(arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

template<typename Type>
void ReverseArray(Type* arr)
{
    int64_t size = sizeof(arr)/sizeof(arr[0]);
    for(size_t i = 0; i <= size/2; ++i)
    {
        switch(arr[i], arr[size - i]);
    }

}
