#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void selectionSort(int arr[], int n){
//      for(int i=0; i<n; i++){
//         for(int j =i+1; j<n; j++){
//             if(arr[i]>arr[j]) swap(arr[i],arr[j]);
//         }
//      }
// }

void bubbleSort(int arr[], int n){
     for(int i=0; i<n-1; i++){
        bool chk  = true;
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]); 
                chk = false;
            } // here we also use one bool for chk if no swapping then return array is sorted
        }
        if(chk){
            break;
        }
     }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

//  selectionSort(arr,n);
 bubbleSort(arr,n);


for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
    return 0;
}