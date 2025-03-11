#include <iostream>

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