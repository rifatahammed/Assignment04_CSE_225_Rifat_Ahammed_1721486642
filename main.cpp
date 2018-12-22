#include "InsertionSort.h"
#include "MergeSort.h"
#include "SelectionSort.h"
#include "BubbleSort.h"
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Creating a selection sort object:\n";
  SelectionSort ss;
  cout<<"Creating an unsorted array for sorting with selection sort:\n";
    int arr[8] = {14,33,27,10,35,19,48,44};
  cout<<"Inserted array is:\n";
  for(int index=0;i<sizeof(arr);i++){
    cout<<arr[i]<<endl;
  }
    n = sizeof(arr)/sizeof(arr[0]);
    ss.SelectionSorter(arr,n);
  
  
