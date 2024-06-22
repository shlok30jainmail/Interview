#include<iostream>
using namespace std;
// here we don't use min, max and <,> operator 
int main(){
    int a = 10, b= 20, c= 23, d = 15, e = 17;
    int count =0;
    // we iterate  loop untill all are zero so we get a max num
    while(a|| b|| c|| d|| e){
        if(a>0) a--;
        if(b>0)b--;
        if(c>0)c--;
        if(d>0)d--;
        if(e>0)e--;
        count++;
    }

    cout<<count<<endl;

}

// 2nd method - we use set or map and store these values in set and map then we can find also
// 3rd store array and sort array and return arr[n-1];
// if we have only 3 int so we also use it - a+b+c/2; 