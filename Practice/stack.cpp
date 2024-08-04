#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Stack implementation
class Stack{
    public:
    int size;
    int *arr;
    int top;

    // constructor
    Stack(){}

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top] = element;
        }else{
            cout<<"Stack is overflow"<<endl;
        }
    }

    void pop(){
        if(top<size && top>=0){
            arr[top] =-1;
            top--;
        }else{
            cout<<"Stack is underflow"<<endl;
        }
    }
    
    int peek(){
        if(top<size &&top>=0){
            return arr[top];
        }else{
            return -1;
        }
    }

    bool isEmpty(){
        if(top==-1) return true;
        else return false;
    }


};
int main(){

    Stack st(3);
    st.push(1);
    st.push(6);
    st.push(5);
    st.pop();
    st.pop();
    st.pop();

    cout<<st.peek()<<endl;
    cout<<st.isEmpty()<<endl;


}