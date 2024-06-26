#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int partition(int *arr, int s, int e){

    // first we find the right place of pivot
    int pivot = arr[s];
    int cnt =0;
    for(int i=s+1; i<e; i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }

    // then we swap it for arranging it on right place
    int pivotIndex = s+cnt;
    swap(arr[s],arr[pivotIndex]);


    // left part and right part arrange
    int i =s, j =e;

    while(i<pivotIndex && j>pivotIndex){

        while(arr[i]<pivot){
            i++;
        }

        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i], arr[j]);
        }
    }


    return pivotIndex;
}



void quickSort(int *arr, int s, int e){
    if(s>=e){
        return;
    }

    // now partition
    int p = partition(arr,s,e);
    // now sort left part
    quickSort(arr,s,p-1);
    //sort right part
    quickSort(arr,p+1,e);
}

int main(){
    int arr[5] = {1,3,4,2,5};
    int n = 5;
    quickSort(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}