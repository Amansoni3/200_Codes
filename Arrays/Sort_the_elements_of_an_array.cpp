// Absolutely! This C++ code aims to perform a basic sorting algorithm on an array of integers using bubble sort and then displays the sorted array.

// Here's a step-by-step explanation of the code:

// 1. **sort Function**:
//    - Takes an array of integers `a[]` and its size as input.
//    - Implements the bubble sort algorithm to sort the array in ascending order.
//    - The nested loops iterate through the array and compare adjacent elements.
//    - If the element at index `j` is greater than the next element at index `j+1`, it swaps them.
//    - After sorting, it prints the sorted array elements.

// 2. **Main Function**:
//    - Initializes an array of integers.
//    - Calculates the size of the array.
//    - Calls the `sort` function with the array and its size.

// Algorithm steps:

// - Start iterating through the array from index 0 to size-1.
// - For each iteration, iterate again through the array from index 0 to size-1-i, where `i` is the current iteration.
// - Compare `a[j]` with `a[j+1]`. If `a[j]` is greater than `a[j+1]`, swap them.
// - After completing the iterations, the largest element will be at the end of the array.
// - Continue this process for the remaining elements, excluding the already sorted ones.
// - Finally, print the sorted array elements.

// The algorithm follows the bubble sort methodology, repeatedly stepping through the list, comparing adjacent elements, and swapping them if they are in the wrong order until the entire list is sorted in ascending order.

#include<bits/stdc++.h>
using namespace std;

int sort(int a[] , int size){
    
    for(int i = 0; i<size-1; i++){
        for(int j = 0; j<size-1; j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i = 0; i<size; i++){
        cout<<a[i]<<" ";
    }
}

int main() {
 int arr[] = {12,34,56,667,32,90,233,234,55,11};
 int size = sizeof(arr)/sizeof(int);
 sort(arr,size);
}
