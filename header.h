#include <iostream>

int32_t CountElements(char * , int32_t );
int32_t CountElements(double * , int32_t);
int32_t CountElements(int32_t * , int32_t);
int32_t outputSumOfSimpleElements(int32_t*, int32_t);
template<typename Type>
void BubbleSort(Type * Arr, int32_t lenght)
{
    int32_t counter{};
    while(counter < lenght)
    {
        if (Arr[counter] > Arr[counter + 1])
        {
            swap(Arr[counter], Arr[counter + 1]);
            counter = -1;
        }
        counter += 1;
    }
}