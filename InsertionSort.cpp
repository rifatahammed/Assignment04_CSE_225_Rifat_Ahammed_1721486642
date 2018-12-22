#include "InsertionSort.h"
#include <iostream>
using namespace std;

void InsertionSort::InsertionSorter(int arr[], int arr_size)
{

    if(arr_size > 1)
    {
        int size = arr_size;
        for(int index = 1; index < size; ++index)
        {
            int index2 = index - 1;
            int key = arr[index];
            while(index2 >= 0 && arr[index2] > key)
            {
                arr[index2+1] = arr[index2];
                --index2;
            }
            arr[index2+1] = key;
            for(int index3 = 0; index3 < arr_size; ++index3)
    {
        cout << arr[index3]<<" ";
    }
    cout <<"\n";
        }

    }
}
