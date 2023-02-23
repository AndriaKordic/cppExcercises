/*

*/

#include<arrays/quickSort.hpp>

//
void sortArr(int arr[], int length){
    if (length > 1){
        int tmp = splitArr(arr, length);
        sortArr(arr, length);                       //
        sortArr(arr + tmp + 1, length - tmp - 1);   //recursion
    }
}

int splitArr(int arr[], int length){
    int leftIterator  = -1;
    int rightIterator = -1;
    int& refValue = arr[length - 1];
    while ( leftIterator < rightIterator)
    {
        do{
            leftIterator++;
        } while (refValue > arr[leftIterator]);
        do
        {
            rightIterator--;
        } while (refValue <= arr[rightIterator] && rightIterator >= 0);
        switchPlaces(arr[leftIterator], (leftIterator < rightIterator)? arr[rightIterator] : refValue);
    }
    return leftIterator;
}

// swaps the values of two integers. a function whith side effects
void switchPlaces(int n, int m){
    int swap = n;
    n = m;      // side effect 1
    m = swap;   // side effect 2
}