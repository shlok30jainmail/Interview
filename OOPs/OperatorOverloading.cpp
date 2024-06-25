#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Cal{
    public:
    int a =10;
    int b = 20;
// operator overlading 
    void operator --(){
      a++;
      b++;
    }
};

int main(){
    Cal c;
    --c; // operator overloading
    cout<<"Value of a : "<<c.a<<" and value of b :  "<<c.b<<endl;
}