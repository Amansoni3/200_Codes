#include<bits/stdc++.h>
using namespace std;

int asceDesc(int a[] , int size){
    
    for(int i = 0; i<size-1; i++){
        for(int j = 0; j<size/2; j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
        for(int j = size/2; j<size-1; j++){
            if(a[j] < a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i = 0; i<size; i++){
        cout<<a[i]<<" ";
    }
}

int main() {
 int arr[] = {1,2,3,4,5,6,7,8,9};
 int size = sizeof(arr)/sizeof(int);
 asceDesc(arr,size);
}