// Polymorphism  - poly means many -> if any thing exist in many form for different different things so this nature of that thing is called polymorphism
// 1. Compile Time Polymorphism - ex- c and cpp(syntax error and showing red line is example of compile time)
//                              i. Function overloading ()
//                              ii. Operator overloading

// 2. Run Time Polymorphism - ex - python(after run the code which error is show is example of run time)
//                          i. Method/Fun. overriding   (we need inheritance for doing this)      

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// function overloading
class College{
    public:
    int a;
    int b;
    // void fun(int a){  // error overloading <--- same fun .... we solve it using different parameter 
    //     cout<<"1"<<endl;
    // }
    void fun(int b){
        cout<<"0"<<endl;
    }

    
};

// method overriding(Run Time Polymorphism)
class Child: public College{
    public:
    int c;
    void fun(int c){
        cout<<"Hi"<<endl;
    }
};

int main(){
 // function overloading   
College c;
c.fun(10);

// method overriding
Child ch;
ch.fun(8); // due to function overriding it print "hi"
ch.College::fun(8); // now we use scope resolution for solving overriding problem

return 0;
}