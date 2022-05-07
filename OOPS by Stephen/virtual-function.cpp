/* Virtual Function */
#include<iostream>

using namespace std; // this is namespace
//Parent class
class base{
    public:
        virtual void print(){
            cout<<"I'm from base/parent class"<<endl;
        }
        void show(){
            cout<<"I'm from base/parent class"<<endl;
        }
};

//child class
class derived : public base{
    public:
        void print(){
            cout<<"I'm from derived/child class"<<endl;
        }
        void show(){
            cout<<"I'm from derived/child class"<<endl;
        }
};

int main ()
{
    base* bptr;
    derived d;
    bptr = &d;

    bptr->print();
    cout<<endl;
    bptr->show();

    return 0;
}