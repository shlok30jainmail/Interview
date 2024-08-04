#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// selection sort
void selectionSort(int arr[], int n){
 for(int i=0; i<n-1; i++){
      for(int j=i+1; j<n; j++){
          if(arr[i]>arr[j]){
            swap(arr[i], arr[j]);
          }
      }
 }
}

void bubbleSort(int arr[], int n){
 for(int i=1; i<n; i++){
      for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
          }
      }
 }
}

int main(){
    int n;
    cin>>n;
    int arr[10] = {1,5,6,7,8,9,2,3,4,0};
    // selectionSort(arr,n);
        bubbleSort(arr,n);


    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;

}