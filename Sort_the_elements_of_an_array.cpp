#include<bits/stdc++.h>
using namespace std;

int sort(int a[] , int size){
    
    for(int i = 0; i<size-1; i++){
        for(int j = 0; j<size-1; j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i = 0; i<size; i++){
        cout<<a[i]<<" ";
    }
}

int main() {
 int arr[] = {12,34,56,667,32,90,233,234,55,11};
 int size = sizeof(arr)/sizeof(int);
 sort(arr,size);
}
