#include <iostream>

int32_t CountElements(char * Arr, int32_t lenght)
{
    int32_t result{};
    int32_t index_of_first_zero{};
    int32_t index_of_last_zero{};
    bool is_zero_first{1};
    for (size_t i = 0; i < lenght; ++i)
    {
        if (Arr[i] == '0' && is_zero_first)
        {
            index_of_first_zero = i;
            is_zero_first = 0;
        }
        if (Arr[i] == '0')
        {
            index_of_last_zero = i;
        }
    }
    if (is_zero_first || index_of_last_zero- index_of_first_zero < 0)
    {
        return -1;
    }
    return index_of_last_zero - index_of_first_zero;
}


int32_t CountElements(double * Arr, int32_t lenght)
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
    return index_of_last_zero - index_of_first_zero;
}


int32_t CountElements(int32_t * Arr, int32_t lenght)
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
    return index_of_last_zero - index_of_first_zero;
}

