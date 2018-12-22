#include "SelectionSort.h"
#include <iostream>
using namespace std;

inline void Swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
void SelectionSort::SelectionSorter(int arr[], int arr_size)
{
    for(int index = 0; index < arr_size - 1; ++index)
    {
        int min = index;
        for(int index1 = index+1; index1 < arr_size; ++index1){
            if(arr[index1] < arr[min])
                min = index1;
        }
        Swap(arr[min], arr[index]);
       for(int index2 = 0; index2 < arr_size; ++index2)
    {
        cout << arr[index2]<<" ";
    }
    cout <<"\n";
    }
}
