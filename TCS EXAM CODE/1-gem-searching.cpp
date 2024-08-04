// you have a box number where gem is ... and also given a matrix which is used to swip the gem so tell at the end where is getdelim
// index = 4
// arr = [{3,2}, {2,1}, {3,1}] 
// and array size is fixed

// my self logic
//  3 me hai to 2 me chala jayega Ok
//  and 2 me hai to 1 me jayega 
//  and 3 me honga tab 1 me jayege

//  pr gem initialy 4 me hai to kahi nahi jayega


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
int index;
cin>>index;

int arr[3][2]; // because array size is fixed
for(int i=0; i<3; i++){
    for(int j=0; j<2; j++){
        cin>>arr[i][j];
    }
}


int ansIndex =index;
for(int i=0; i<3; i++){
  if(arr[i][0]==ansIndex || arr[i][1]==ansIndex){
    ansIndex = ansIndex^ (arr[i][0] ^ arr[i][1]);  // same honga to zero aa jayega and different index ansindex me jayega
  }
}
cout<<"Finally gem is in Box number : "<<ansIndex<<endl;

return 0;
}