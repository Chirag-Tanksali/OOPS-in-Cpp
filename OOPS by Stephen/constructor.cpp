#include<iostream>
using namespace std;

class constructor{
    public:
    //The below is an example for default constructor bcz there are no parameters passed .
        constructor(){
            cout<<"This is from Constructor"<<endl;
        }
};

//The below is an example for Parameterized constructor 
class Add{
    public:
    Add(int num1,int num2){
        cout<<(num1+num2)<<endl;
    }
};
int main(){ 

    // constructor obj;
    Add a(5,10);

    
    return 0;
}