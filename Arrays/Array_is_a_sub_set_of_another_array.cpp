#include <iostream>
using namespace std;

bool isSubset(int arr1[], int sizeArr1, int arr2[], int sizeArr2) {
    int i, j;
    for (i = 0; i < sizeArr2; i++) {
        for (j = 0; j < sizeArr1; j++) {
            if (arr2[i] == arr1[j]) {
                break;
            }
        }
        if (j == sizeArr1) {
            return false; // Not a subset
        }
    }
    return true; // Subset
}

int main() {
    int arr1[] = { 11, 10, 13, 21, 30, 70 };
    int arr2[] = { 11, 30, 70, 10 };
    int sizeArr1 = sizeof(arr1) / sizeof(int);
    int sizeArr2 = sizeof(arr2) / sizeof(int);
    bool subset = isSubset(arr1, sizeArr1, arr2, sizeArr2);
    if (subset) {
        cout << "arr2[] is a subset of arr1[]";
    } else {
        cout << "arr2[] is not a subset of arr1[]";
    }
    return 0;
}
