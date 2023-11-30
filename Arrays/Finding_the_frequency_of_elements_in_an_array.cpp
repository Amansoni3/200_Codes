#include<bits/stdc++.h>
using namespace std;

int frequencyElement(int a[] , int size){
    
    for(int i = 0; i<size; i++){
        int count = 1; // Initialize count for each element
        for(int j = i+1; j<size; j++){
            if(a[i] == a[j]){
                count++; // Increment count if element is found again
            }
        }
        cout<<"Element "<<a[i]<<" Appeard "<<count<<" times ";
        cout<<endl;
    }
    
}

int main() {
 int arr[] = {12,34,56,667,32,90,233,234,55,11};
 int size = sizeof(arr)/sizeof(int);
 frequencyElement(arr,size);
}

// Certainly! Here's an algorithm for finding the frequency of elements in an array:

// ```
// 1. Start
// 2. Initialize an array A[] of size n and a variable count.
// 3. Traverse the array A[] from index i = 0 to n - 1
//     a. For each element A[i] in the array:
//         i. Set count = 1 (for the frequency of the current element)
//         ii. Traverse the array from index j = i + 1 to n - 1
//             A. For each element A[j]:
//                 - If A[i] is equal to A[j], increment count by 1
//         iii. Print or store the count as the frequency of A[i]
// 4. End
// ```

// This algorithm explains the step-by-step process:

// 1. **Initialization:** Start with an array A[] of elements and a variable to count frequencies.
// 2. **Traverse through the array:** Loop through each element in the array (from index 0 to n - 1).
// 3. **For each element A[i]:**
//     - Set a counter to 1 to start counting the frequency of the current element.
//     - Check every subsequent element (from index i + 1 to n - 1) to compare with the current element.
//         - If the current element (A[i]) matches any other element in the array, increment the count.
//     - Print or store the count as the frequency of the current element.
// 4. **End of Algorithm.**

// This algorithm iterates through the array, focusing on each element at a time, and counts how many times that specific element appears in the array by comparing it with all the other elements.

