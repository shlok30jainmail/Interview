#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// 0(1) Time Complexity
int main(){
    int yr;
    cin>>yr;
  
  // if yr is a centuary yr like 1600, 1700 , 1800, 1900, 2300  etc
    if(yr%100==0){
        if(yr%400==0) cout<<"Yes it is a leap year"<<endl;
        else cout<<"It is not a leap year"<<endl;
    }else{ // if yr not centuary yr like 2024, 2034, 1986 etc
        if(yr%4==0) cout<<"Yes it is a leap year"<<endl;
         else cout<<"It is not a leap year"<<endl;
    }

    return 0;
}