#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s+ (e-s)/2;

    int len1 = mid - s+1;
    int len2 = e- mid;

    // create two array
    int *first = new int[len1];
    int *second = new int[len2];

    // now copy the value
    int k =s;
    for(int i=0; i<len1; i++){
        first[i] = arr[k++];
    }
     
     k = mid+1;
    for(int j =0; j<len2; j++){
        second[j] = arr[k++];
    }

    // now merge two array
    int index1 =0;
    int index2 =0;
    int mainIndex =s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainIndex++] = first[index1++];
        }else{
            arr[mainIndex++] = second[index2++];
        }
    }

    // if index1 is remaining then
    while(index1<len1){
           arr[mainIndex++] = first[index1++];
    }

     // if index1 is remaining then
    while(index2<len2){
           arr[mainIndex++] = second[index2++];
    }
}




void mergeSort(int *arr, int s, int e){
    if(s>=e){
        return;
    }

    int mid = s+ (e-s)/2;
    // left part
    mergeSort(arr,s,mid);
    // right part
    mergeSort(arr,mid+1,e);

    // now merge both
    merge(arr,s,e);
}

int main(){
    int arr[5] = {1,3,4,2,5};
    int n = 5;
    mergeSort(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}