// Abstraction - Data hiding or implementation hiding and showing only necessary things to user is called Abstraction
// like sorting inbuilt function is also example of abstract fun. because we used it but many people don't know what method they use to sort the elements
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Cal{
    private:
    int a;
    int b;
    int c;
    public:
    Cal(){}
    Cal(int a, int b, int c){
      this->a =a;
      this->b = b;
      this->c = c;
    }
    void operation(int a,int b, int c){
        int sum = (a*b)+c;
        cout<<sum<<" This is answer"<<endl;
    }
};


int main(){
Cal c(10,20,5);
c.operation(10,20,5);
}