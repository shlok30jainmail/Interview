#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int r=4, col=4;
    
    // print pattern -1 
    // *
    // **
    // ***
    // ****
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // print pattern -2
    // 1
    // 22
    // 333
    // 4444
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<i+1;
    //     }
    //     cout<<endl;
    // }


    
    // print pattern -3
    // 1
    // 12
    // 123
    // 1234
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<j+1;
    //     }
    //     cout<<endl;
    // }


    // print pattern -4
    // 1
    // 23
    // 456
    // 78910
    int count =1;
    for(int i=0; i<r; i++){
        for(int j=0; j<=i; j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    return 0;
}