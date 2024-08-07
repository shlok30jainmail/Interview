#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Queue{
   public:
   int *arr;
   int size;
   int front =0;
   int rear = 0;

   // constructor
   Queue(){}

   Queue(int size){
    this->size = size;
    arr = new int[size];
   }

   // push
   void push(int element){
    if(rear<size){
        arr[rear] =element;
        rear++;
    }else{
        cout<<"Queue is overflow"<<endl;
    }
   }

   // pop

   void pop(){
    if(front !=rear){
        arr[front] = -1;
        front++;
        if(front==rear){
            front =0;
            rear = 0; // for saving memory empty space
        }
    }else{
        cout<<"Stack is underflow"<<endl;
    }
   }

   int peak(){
    if(front != rear){
        return arr[front];
    }else{
        return -1;
    }
   }

   bool isEmpty(){
    if(front==rear) return true;
    else return false;
   }
};

int main(){

    Queue q(3);
    q.push(3);
    q.push(6);
    q.push(9);
    
    q.pop();
    cout<<q.peak()<<endl;
    cout<<q.isEmpty()<<endl;

return 0;
}