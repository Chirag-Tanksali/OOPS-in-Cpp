#include<iostream>
using namespace std;
//A parent class has multiple child classes.
//B and C inherits A 

class A{
    public:
        A(){
            cout<<"Constructor of A "<<endl;
        }
};

class B:public  A{
    public:
        B(){
            cout<<"Constructor of B "<<endl;
        } 
};

class C: public A {
    public:
        C(){
            cout<<"Constructor of C "<<endl;
        }
};


int main(){

    C obj;
    cout<<endl;
    B obj1;
    return 0;
}