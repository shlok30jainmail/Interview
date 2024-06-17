// Encapsulation -> data bind up or wrap up into a single unit is called encapsulation

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Samsung{
   private:
   int screenSize;
   string model;
   public:
   // default constructor
   Samsung(){

   }
   // parameterized constructor
   Samsung(int screenSize, string model){
      this->screenSize = screenSize;
      this->model = model;
   }
   
   void getData(){
    cout<<screenSize<<" "<<model<<endl;
   }
};

int main(){
 Samsung s(10,"octa");
  s.getData();
}