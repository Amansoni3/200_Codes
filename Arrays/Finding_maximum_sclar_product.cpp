// ### Algorithm for Calculating Maximum Scalar Product:

// 1. **`minimumScalarProduct` Function:**
//     - Takes two arrays (`arr` and `arr1`) and their size as input.

// 2. **Sort Arrays in Ascending Order:**
//     - Sorts `arr` in ascending order using a simple bubble sort.
//     - Sorts `arr1` in ascending order as well.

// 3. **Display Sorted Arrays (Debug Purpose):**
//     - Displays the sorted arrays to the console for debugging purposes.

// 4. **Calculate Scalar Product:**
//     - Calculates the scalar product by multiplying corresponding elements of the sorted arrays and summing these products.
//     - Accumulates the product in the variable `product`.

// 5. **Return Result:**
//     - Returns the calculated scalar product.

// 6. **`main` Function:**
//     - Initializes two arrays (`arr` and `arr1`).
//     - Calls the `minimumScalarProduct` function with these arrays and their size.
//     - Displays the resulting maximum scalar product.

// The corrected code correctly sorts both arrays in ascending order before calculating the scalar product.

// ### Example Execution:

// Given arrays `arr[] = {1, 2, 6, 3, 7}` and `arr1[] = {10, 7, 45, 3, 7}`:
// - `minimumScalarProduct` sorts `arr` in ascending order: `{1, 2, 3, 6, 7}`.
// - `minimumScalarProduct` sorts `arr1` in ascending order: `{3, 7, 7, 10, 45}`.
// - Calculates the maximum scalar product: `(1*3) + (2*7) + (3*7) + (6*10) + (7*45) = 3 + 14 + 21 + 60 + 315 = 413`.

// The function returns `413`, indicating that this is the maximum scalar product for the given arrays.

#include<iostream>
using namespace std;

int minimumScalarProduct(int arr[], int arr1[] , int size) {
    // sorting arr in asce order
    for(int i = 0; i<size-1; i++){
        for(int j = 0; j<size-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
    //sorting arr1 in desc order.
    for(int i = 0; i<size-1; i++){
        for(int j = 0; j<size-1; j++){
            if(arr1[j] > arr1[j+1]){
                swap(arr1[j] , arr1[j+1]);
            }
        }
    }
    cout<<"Sorted in asce ";
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Sorted in desc ";
    for(int i = 0; i<size; i++){
        cout<<arr1[i]<<" ";
    }
    
    int product = 0;
    for(int i = 0; i<size; i++){
       product = product + (arr[i]*arr1[i]);
    }
    cout<<endl;
    return product;
}

int main() {
    int arr[] = {1, 2, 6, 3, 7};
    int arr1[] = {10, 7, 45, 3, 7};
    int size = sizeof(arr) / sizeof(int);
    int product = minimumScalarProduct(arr,arr1, size);
    cout<<"The max sclar product: "<<product;
    return 0;
}
