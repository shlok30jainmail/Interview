#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

// using two stack we can make queue implementation

int main(){
   stack<int>s1;
   s1.push(3);
   s1.push(5);
//    cout<<s1.top()<<endl;
  stack<int>q;
 while(!s1.empty()){
    int a = s1.top();
    q.push(a);
    s1.pop();
 }

   cout<<q.top()<<endl;

   return 0;
}