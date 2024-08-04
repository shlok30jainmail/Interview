#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// start pattern
//    *   
//   ***
//  *****
// *******
int main(){

    int r =4;
    int c = 7;
    int mid = c/2;
    int star =1;
    for(int i=0; i<r; i++){
        for(int i=0; i<mid; i++){
            cout<<" ";
        }

         for(int i=0; i<star; i++){
            cout<<"*";
         }

         for(int i=0; i<mid; i++){
            cout<<" ";
        }

        star = star +2;
        mid--;
        cout<<endl;

    }
    return 0;

}