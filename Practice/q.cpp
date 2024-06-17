#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int front =0;
    int rear=0;
    
    Queue(){}
    Queue(int size){
     this->size = size;
     arr = new int[size];
    }

    // operations
   void push(int element){
    if(rear==size){
        cout<<"Queue is overflow"<<endl;
    }else{
        arr[rear] = element;
        rear++;
    }
   }

   void pop(){
     if(front ==rear){
        cout<<"Queue is empty"<<endl;
     }else{
        arr[front] =-1;
        front++;
        if(front == rear){
            front =0;
            rear = 0;
        }
     }
   }

   bool empty(){
    if(front == rear){
        return true;
    }else{
        return false;
    }
   }

   int Front(){
    if(front == rear){
        // cout<<"Queue is empty"<<endl;
        return -1;
    }else{
        return arr[front];
    }
   }


};

int main(){
    Queue q(2);
    q.push(5);
    q.push(2);
    q.pop();
    cout<<q.Front()<<endl;
    // cout<<q.Back()<<endl;

    return 0;
}