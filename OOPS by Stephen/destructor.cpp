#include<iostream>
using namespace std;

/*
When does the destructor get called?
A destructor is automatically called when 
1.The program finished execution 
2.When a scope (the {} parenthesis) containing local variable ends.
*/

class HelloWorld{
    public:
    //Constructor
        HelloWorld(){
            cout<<"Constructor is called"<<endl; 
        }
    //Destructor
        ~HelloWorld(){
            cout<<"Destructor is called"<<endl;
        }
    //Member function
    void display(){
        cout<<"Hello World from Member function"<<endl;
    }

};

int main(){

    HelloWorld obj;  //Object created
    obj.display();

    return 0;
}