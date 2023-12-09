#include <iostream>
using namespace std;
bool isDisjoint(int arr1[] , int arr2[] , int sizeArr1 , int sizeArr2){
    for(int i = 0; i < sizeArr1; i++){
        for(int j = 0; j < sizeArr2; j++){
            if(arr1[i] == arr2[j]){
                return 0;
            }
        }
    }
    return 1;
}
int main() {
    int arr1[] = {10, 21, 30, 67};
    int arr2[] = {20, 90, 80, 77, 23};
    int sizeArr1 = sizeof(arr1)/sizeof(int);
    int sizeArr2 = sizeof(arr2)/sizeof(int);
    if(isDisjoint(arr1, arr2, sizeArr1, sizeArr2))
    cout<<"Yes";
    else cout<<"No";
    return 0;
}