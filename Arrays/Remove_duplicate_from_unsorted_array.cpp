// ### Algorithm to Remove Duplicates from Unsorted Array using Sorting:

// 1. **Function Definition:** `int removeDuplicate(int arr[], int size)`

// 2. **Base Case Check:** 
//    - If the array size is 0 or 1, return size itself (no duplicates to remove).

// 3. **Sort the Array:**
//    - Use a sorting algorithm (`std::sort` in C++) to sort the array in ascending order.

// 4. **Initialize a Variable to Track Unique Elements:**
//    - Initialize a variable `j` to keep track of unique elements in the modified array.

// 5. **Traverse the Sorted Array:**
//    - Start a loop from index `0` up to `size - 1`.
//    - For each element `arr[i]`:
//       - Compare `arr[i]` with the next element `arr[i + 1]`.
//       - If `arr[i]` is not equal to `arr[i + 1]`, it's a unique element.
//       - Update `arr[j]` with this unique element.
//       - Increment `j` to move to the next index for the next unique element.

// 6. **Handle Last Element:**
//    - After the loop, add the last element (`arr[size - 1]`) to the unique elements at `arr[j]`.
//    - Increment `j` to account for this addition.

// 7. **Return Count of Unique Elements (`j`):**
//    - Return the value of `j`, representing the count of unique elements after removing duplicates.

// ### Example Execution:

// Given an input array `[10, 30, 20, 10, 30, 40, 20, 50]`:
// - The `removeDuplicate` function modifies the array to `[10, 20, 30, 40, 50]`.
// - The returned value will be `5`, indicating there are 5 unique elements in the modified array.

// This algorithm sorts the input array first and then identifies unique elements by traversing the sorted array, removing duplicates by updating the array in place.

#include <iostream>
#include <algorithm>
using namespace std;

int removeDuplicate(int arr[], int size) {
    if (size <= 1) {
        return size; // No duplicates to remove
    }

    // Sort the array
    sort(arr, arr + size);

    // Initialize variables
    int j = 0;

    // Traverse the sorted array
    for (int i = 0; i < size - 1; ++i) {
        // If the current element is not equal to the next element
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i]; // Update the array with unique element
        }
    }

    arr[j++] = arr[size - 1]; // Handle the last element

    return j; // Return the count of unique elements
}

int main() {
    int arr[] = {10, 30, 20, 10, 30, 40, 20, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    size = removeDuplicate(arr, size);

    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}
