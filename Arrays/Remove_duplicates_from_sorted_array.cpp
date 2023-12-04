// ### Algorithm to Remove Duplicates from an Array:

// 1. **Function Definition:** `int removeDuplicate(int arr[], int size)`

// 2. **Base Case Check:** 
//    - If the array size is 0 or 1, return the size itself (no duplicates to remove).

// 3. **Initialization:**
//    - Initialize a variable `j` to keep track of the index for unique elements (initially set to 0).

// 4. **Iterate through the Array:**
//    - Start a loop from index `0` up to `size - 1`.
//    - Compare each element `arr[i]` with the next element `arr[i + 1]`.
//    - If `arr[i]` is not equal to `arr[i + 1]`, it implies the current element is unique.
   
// 5. **Unique Element Handling:**
//    - When encountering a unique element:
//       - Assign `arr[j]` as the current unique element (`arr[i]`).
//       - Increment `j` to move to the next index for the next unique element.

// 6. **Final Step for Last Element:**
//    - The loop continues until `size - 1`. After the loop, add the last element (`arr[size - 1]`) to the unique elements at `arr[j]`.
//    - Increment `j` to account for this addition.

// 7. **Return Count of Unique Elements (`j`):**
//    - Return the value of `j`, representing the count of unique elements after removing duplicates.

// ### Example Execution:
// Given an input array `[10, 20, 20, 30, 40, 40, 40, 50, 50]`:
// - `removeDuplicate` function modifies the array to `[10, 20, 30, 40, 50]`.
// - The returned value (`j`) will be `5`, indicating there are 5 unique elements in the modified array.

// This algorithm traverses the input array, identifies unique elements, and updates the array in place to contain only the unique elements.

// The variable `j` in the `removeDuplicate` function is being used to keep track of the unique elements after removing duplicates. 

// When the function finishes its job of removing duplicates from the array, it returns the value of `j`, which represents the count of unique elements left in the array.

// This return value is crucial because in the `main()` function, it updates the `size` variable. As duplicates are removed from the array, the count of unique elements changes. By returning `j` (which holds the count of unique elements), the `main()` function can correctly utilize this updated count to print only the unique elements of the modified array.


#include<iostream>
using namespace std;

int removeDuplicate(int arr[], int size) {
    if (size == 0 || size == 1) {
        return size;
    }
    int j = 0;
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j] = arr[i];
            j = j + 1;
        }
    }
    arr[j] = arr[size - 1];
    j++;
    return j;
}

int main() {
    int arr[] = {10, 20, 20, 30, 40, 40, 40, 50, 50};
    int size = sizeof(arr) / sizeof(int);
    size = removeDuplicate(arr, size);
    cout << "Removing duplicate element\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
