#include<iostream>
using namespace std;

class Human{
    public:
        Human(){
            cout<<"Constructor Called"<<endl;
        }

        ~Human(){
            cout<<"Destructor called"<<endl;
        }
};

int main() {

    Human obj; //Destructor is automatically called for static declaration
    cout<<sizeof(obj)<<endl;
    cout<<endl;

    Human *chirag; //Destructor should be manually called for dynamic 
    chirag =new Human();
    cout<<sizeof(chirag)<<endl;
    
    delete chirag; //Destructor is manually called



return 0;
}