// INHERITANCE
// 1. Single
// 2. Multilevel
// 3. Multiple
// 4. Hierarichal
// 5. Hybrid


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//parents call Creature
class Creature{
    public:
    string name;
    int power;
    
    void setPower(int power){
        this->power = power;
    }

};

// single level inheritance
class Human : public Creature{
  public:
  int mind;
  
  void setMindPower(int mind){
    this->mind = mind;
  }
};

// Multi level inheritance
class Male : public Human{
    public:
    int salary;
    string color;

    void setBodyColor(string color){
        this->color=color;
    }
};

// Hierarichal  inheritance (also Hybrid all above combination)
class Female : public Human{
    public:
    int height;
    string nickname;

    void setBodyColor(int height){
        this->height=height;
    }
};

// multiple inheritance

class Baby : public Male, public Female{
    public:
    string dob;
};

int main(){
    Creature c;
    c.setPower(10);
    cout<<c.power<<endl;

    Human h;
    h.name = "aashu";
    cout<<h.name<<endl;  // single level inheritance


    Male m;
    m.name = "Ash";
    cout<<m.name<<endl; // multi level 

    Female f;
    f.name = "Asha";
    cout<<f.name<<endl; // Hierarchy inheritance

    Baby b;
    b.color="white";
    b.height=5;
    cout<<b.color<<" "<<b.height<<endl; // multiple inheritance

    return 0;
}