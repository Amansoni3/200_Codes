// Approach:
// Initialize variables to keep track of the maximum product, current maximum product, and current minimum product.
// Iterate through the array elements.
// For each element:
// If the element is negative, swap the current maximum product and current minimum product since multiplying a negative number can change the maximum to minimum and vice versa.
// Update the current maximum product and current minimum product considering the current element.
// Update the overall maximum product seen so far.
// Return the maximum product.

#include <iostream>
using namespace std;
int subArray(int arr[], int size) {
    int ans = arr[0];
    int maxProd = ans;
    int minProd = ans;
    for (int i = 1; i < size; i++) {
        if (arr[i] < 0) {
            swap(maxProd, minProd);
        }
        maxProd = max(arr[i], maxProd * arr[i]);
        minProd = min(arr[i], minProd * arr[i]);
        ans = max(ans, maxProd);
    }
    return ans;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, -8, 0, 1, 2, 3, 4, -7, -4, 3};
    int size = sizeof(arr) / sizeof(int);
    int sub = subArray(arr, size);
    cout << sub;
    return 0;
}
