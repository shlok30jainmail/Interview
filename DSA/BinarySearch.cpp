#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int n, int key){
    int s =0;
    int e = n;
    int mid = (s+e)/2; // e + (e-s)/2
    bool ans = false;
    while(s<e){
        if(arr[mid]==key){
            ans = true;
            break;
        }else if(arr[mid]<key){
            s= mid+1;
        }else{
            e = mid;
        }
        mid = (s+e)/2;
    }

    return ans;
}

int main(){
    int n, key ;
    cin>>n>>key;
    
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    if(binarySearch(arr,n,key)) cout<<"Yes it is present"<<endl;
    else cout<<"No it is not present"<<endl;
    cout<<"Thanks"<<endl;
    return 0;

}