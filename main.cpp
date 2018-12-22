#include "InsertionSort.h"
#include "MergeSort.h"
#include "SelectionSort.h"
#include "BubbleSort.h"
#include <iostream>
using namespace std;

int main()
{
  int n,counting;
  
  
  
  
  
  
  cout<<"Creating a selection sort object:\n";
  SelectionSort ss;
  cout<<"Creating an unsorted array for sorting with selection sort:\n";
    int arr[8] = {14,33,27,10,35,19,48,44};
  cout<<"Inserted array is:\n";
  for(counting=0;i<sizeof(arr);i++){
    cout<<arr[i]<<endl;
  }
    n = sizeof(arr)/sizeof(arr[0]);
    ss.SelectionSorter(arr,n);
  cout<<"After sorting the array is now:\n";
  for(counting=0;i<sizeof(arr);i++){
    cout<<arr[i]<<endl;
  }
  
  
  
  
  
  
  
  
    cout<<"Creating a Insertion Sort object:\n";
  InsertionSort is;
  cout<<"Creating an unsorted array for sorting with Insertion Sort:\n";
    int arr2[8] = {14,33,27,10,35,19,48,44};
  cout<<"Inserted array is:\n";
  for(counting=0;i<sizeof(arr2);i++){
    cout<<arr2[i]<<endl;
  }
    n = sizeof(arr2)/sizeof(arr2[0]);
    is.InsertionSorter(arr2,n);
  cout<<"After sorting the array is now:\n";
  for(counting=0;i<sizeof(arr2);i++){
    cout<<arr2[i]<<endl;
  }
  
  
  
  
  
  
  
    cout<<"Creating a  Merge Sort object:\n";
  MergeSort ms;
  cout<<"Creating an unsorted array for sorting with Marge Sort:\n";
    int arr3[8] = {14,33,27,10,35,19,48,44};
  cout<<"Inserted array is:\n";
  for(counting=0;i<sizeof(arr3);i++){
    cout<<arr3[i]<<endl;
  }
    n = sizeof(arr3)/sizeof(arr3[0]);
    ms.merge_sort(arr3,0,n-1);
  cout<<"After sorting the array is now:\n";
  for(counting=0;i<sizeof(arr3);i++){
    cout<<arr3[i]<<endl;
  }
