#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int r=4, col=7;
    
    // print pattern -1 
    //    *
    //   ***
    //  *****
    // *******
    int sp = col/2;
    int star =1;
    for(int i=0; i<r; i++){

        for(int j=0; j<sp; j++){
            cout<<" ";
        }
        for(int k=0; k<star; k++){
            cout<<"*";
        }
        for(int j=0; j<sp; j++){
            cout<<" ";
        }
        star=star+2;
        sp--;
        cout<<endl;
    }

    return 0;
}