// Here's a step-by-step breakdown of the algorithm:

// 1. **repeatingElement function:**
//     - Takes an array `arr[]` and its size `size` as parameters.
//     - Sorts the array in descending order using bubble sort (not the most efficient sorting algorithm, but it works for this purpose).
//     - Iterates through the sorted array and checks for adjacent elements that are equal.
//     - Prints the repeating elements found.

// 2. **main function:**
//     - Initializes an array `arr` with some values.
//     - Calculates the size of the array using `sizeof(arr)/sizeof(int)`.
//     - Calls the `repeatingElement` function with the array and its size as arguments.


#include<iostream>
using namespace std;

int repeatingElement(int arr[] , int size){
    for(int i = 0; i<size-1; i++){
        for(int j = 0; j<size-1; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0; i<size; i++){
        if(arr[i] == arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int arr[] = {87,23,45,65,23,98,65,87};
    int size = sizeof(arr)/sizeof(int);
    repeatingElement(arr , size);
    return 0;
}