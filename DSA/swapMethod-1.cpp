#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;

    // 1st method of swapping variables using third variable
    int temp;
    temp =a;
    a =b;
    b = temp;


    // 2nd method of swapping variables using + and -
    // a = a+b;
    // b = a-b;
    // a = a-b;

    // 3rd method of swapping variables using * and / (But it is not good for all num)
    // a = a*b;
    // b = a/b;
    // a = a/b;

    // 4th method of swapping variables using ^ (XOR)
    // a = a^b;
    // b = a^b;
    // a = a^b;


    // output 
    cout<<"Value of a is : "<<a<<" and value of b is : "<<b<<endl;

}