// Certainly! This code aims to find the largest palindrome number in an array. Here's a step-by-step explanation of the provided code:

// 1. **isPallindrome function**: 
//     - Takes an integer input and checks whether it's a palindrome or not by reversing the number and comparing it with the original number. If they're equal, it returns `true`, else `false`.

// 2. **largestPalindrome function**: 
//     - Takes an array and its size as input.
//     - Sorts the array in ascending order (there is a mistake in the sorting logic, though, which we'll correct later).
//     - Iterates through the sorted array from the largest element to the smallest.
//     - For each number, checks if it's a palindrome using the `isPallindrome` function. If it finds a palindrome, it returns that number (which will be the largest palindrome in the sorted array).
//     - If no palindrome is found, it returns -1.

// 3. **Main Function**:
//     - Creates an array of integers.
//     - Calculates the size of the array.
//     - Calls `largestPalindrome` function with the array and its size.
//     - Displays the result based on the return value of `largestPalindrome`.

// However, there's an issue in the sorting logic inside `largestPalindrome` function:

// Overall, the algorithm tries to find the largest palindrome in the array after sorting it in ascending order, then checks each number from the largest to the smallest to find the first palindrome. If it finds one, it returns it; otherwise, it returns -1.

#include <iostream>
using namespace std;

bool isPallindrome(int number){
    int temp  = number;
    int reverse = 0;
    while(temp != 0){
        int remainder =  temp % 10;
        reverse = reverse * 10 + remainder;
        temp = temp/10;
    }
   if(number == reverse){
     return true ;
   }
   else{
       return false;
   }
}

int largestPalindrome(int arr[], int size){
    //sort the array
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(arr[i] < arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    
    for(int i = size-1; i >= 0; --i)
    { //If a number is a pallindrome
        if(isPallindrome(arr[i])){
            return arr[i];
        }
    }
    return -1;
}

int main() {
    
    int arr[] = {55,66,77,888,999,333333,111111,999999};
    
    int size = sizeof(arr)/sizeof(int);
    int largest = largestPalindrome(arr,size);
    
    if(largest == -1){
        cout<<"There is no pallindrome in array.";
    }
    else
    {
        cout<<"Longest Pallindrome in array is "<<largest;
    }

    return 0;
}
