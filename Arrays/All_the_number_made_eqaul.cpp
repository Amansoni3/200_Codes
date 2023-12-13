// This code is designed to check if all the numbers in the array, after dividing by 2 or 3 any number of times, become equal. Here's a breakdown of the algorithm:

// 1. Define a function `EqualNumbers` that takes an array of integers `a[]` and its size `n` as parameters.

// 2. Inside the function, iterate through each element of the array using a for loop.

// 3. For each element in the array, continuously divide the number by 2 while it is even (`a[i] % 2 == 0`), and divide by 3 while it is divisible by 3 (`a[i] % 3 == 0`).

// 4. Check if the modified number (`a[i]`) is not equal to the first element of the array (`a[0]`). If they're not equal, return `false` immediately, indicating that not all numbers could be made equal after the divisions.

// 5. If the loop completes without finding any unequal number, return `true`, indicating that all numbers became equal after the divisions.

// 6. In the `main` function, an array `{ 50, 75, 150 }` is defined, and its size is calculated using `sizeof(a) / sizeof(a[0])`.

// 7. The `EqualNumbers` function is called with this array and its size. If all the numbers in the array become equal after divisions, it prints "Yes"; otherwise, it prints "No".

// This algorithm essentially checks whether all numbers in the array, after repeatedly dividing by 2 or 3, become equal. If they do, it returns true; otherwise, it returns false.

#include<iostream>
using namespace std;

int EqualNumbers(int a[] , int n){
    for(int i = 0; i < n; i++){
        while(a[i] % 2 == 0){
            a[i] /= 2;
        }
        while(a[i] % 3 == 0){
            a[i] /= 3;
        }
        if(a[i] != a[0]){
            return false;
        }
    }
    return true;
}
int main()
{
    int a[] = { 50, 75, 150 };
    int n = sizeof(a) / sizeof(a[0]);
    if (EqualNumbers(a, n))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}