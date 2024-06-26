#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    // construtor
    Stack(){}

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top =-1;
    }

    // method/ operations

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
            arr[top] =-1;
            top--;
        }else{
            cout<<"Stack is underflow"<<endl;
        }
    }

    int peak(){
        if(top>=0 && top<=size){
            return arr[top];
        }else{
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

};


int main(){
    Stack st(5);
    st.push(6);
    st.push(7);
    st.push(3);
    st.pop();
    st.pop();
    st.pop();
    cout<<st.peak()<<endl;
    cout<<st.isEmpty()<<endl;

    return 0;
}