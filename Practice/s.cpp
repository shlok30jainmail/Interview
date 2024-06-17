#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;
     Stack(){}
    Stack(int size){
     this->size= size;
     arr = new int[size];
     top = -1; 
    }

    // operations
    void push(int element){
      if(size-top>1){
        top++;
        arr[top] = element;
      }else{
        cout<<"Stack is overflow"<<endl;
      }
    }

    void pop(){
       if(top>=0 && top<=size){
        top--;
       }else{
        cout<<"Stack is underflow"<<endl;
       }
    }

    int peak(){
       if(top>=0 && top<=size){
        cout<<arr[top]<<endl;
        return arr[top];
       }else{
        cout<<"Stack is empty"<<endl;
        return -1;
       }
    }
    bool isEmpty(){
     if(top==-1){
        return true;
     }else{
        return false;
     }
    }

    int sizee(){
        cout<<"Size of stack is : "<<top+1<<endl;
    }
};

int main(){
     Stack st(2);
     st.push(5);
     st.push(6);
    //  st.pop();
    //  st.pop();
    //  st.peak();
    st.sizee();

     return 0;

}