#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int r=4, col=4;
    
    // print pattern -1 
    //    *
    //   **
    //  ***
    // ****
    // int sp = r-1;
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<r; j++){
    //         if(j<sp){
    //             cout<<" ";
    //         }else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    //     sp--;
    // }


    // print pattern -2
    //    1
    //   22
    //  333
    // 4444
    // int sp = r-1;
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<r; j++){
    //         if(j<sp){
    //             cout<<" ";
    //         }else{
    //             cout<<i+1;
    //         }
    //     }
    //     cout<<endl;
    //     sp--;
    // }


    
    // print pattern -3
    //    1
    //   12
    //  123
    // 1234
    // int sp = r-1;
    // for(int i=0; i<r; i++){
    //     int c =1;
    //     for(int j=0; j<r; j++){
    //         if(j<sp){
    //             cout<<" ";
    //         }else{
    //             cout<<c;
    //             c++;
    //         }
    //     }
    //     cout<<endl;
    //     sp--;
    // }


    // print pattern -4
    //    1
    //   23
    //  456
    // 78910
    int count =1;
     int sp = r-1;
    for(int i=0; i<r; i++){
        // int c =1;
        for(int j=0; j<r; j++){
            if(j<sp){
                cout<<" ";
            }else{
                cout<<count;
                count++;
            }
        }
        cout<<endl;
        sp--;
    }
    return 0;
}