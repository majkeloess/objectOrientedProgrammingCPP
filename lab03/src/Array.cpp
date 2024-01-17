#include <iostream>
#include "Array.h"

int *InitArray(int n)
{
    int *array = new int[n];
    for(int i=0; i < n; i++)
    {
        array[i] = 0;
    }

    return array;
}

void DeleteArray(int *array){
    delete[] array;
}

int *ChangeArraySize(int *array, int n, int k)
{
    int *n_array = new int[k];

    for(int i = 0; i < n ; i++)
    {
        n_array[i] = array[i];

    }
    delete [] array;

    return n_array;
}


void CreateSequence(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        array[i] = i*i;
    }
}
