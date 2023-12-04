// Certainly! Counting the number of distinct elements in an array involves identifying unique elements within the array and determining how many different elements exist without counting duplicates.

// ### Explanation:

// 1. **distinctArray Function**:
//     - Takes an array and its size as input.
//     - Initializes a counter `distinctCount` to keep track of the number of distinct elements.
//     - Iterates through each element of the array.
//     - For each element, it checks for duplicates by comparing it with elements after it in the array.
//     - If a duplicate is found, `isDistinct` is set to `false`, indicating that the element is not distinct.
//     - If the element is distinct (`isDistinct` remains `true`), it increments `distinctCount`.
//     - Returns the final count of distinct elements.

// 2. **Main Function**:
//     - Initializes an array `arr`.
//     - Calculates the size of the array.
//     - Calls the `distinctArray` function with the array and its size.
//     - Displays the count of distinct elements.

// This program employs a nested loop structure to compare each element with subsequent elements to determine whether they are unique. If an element is found to be unique (no duplicates found in subsequent elements), it's counted as a distinct element. The final count represents the number of unique elements in the array.

#include <iostream>
using namespace std;

int distinctArray(int arr[], int size){
    int distinctCount = 0;
    for(int i = 0; i<size; i++){
        bool isDistinct = true;
        for(int j = i+1; j<size; j++){
            if(arr[i] == arr[j]){
                isDistinct = false;
                break;
            }
        }
        if(isDistinct){
            distinctCount++;
        }
    }
    return distinctCount;
}

int main() {
    
    int arr[] = {10, 30, 10, 20, 40, 20, 50, 10,10};
    
    int size = sizeof(arr)/sizeof(int);
    int distinct = distinctArray(arr,size);
    
    cout<<"Distinct array are "<<distinct;

    return 0;
}
