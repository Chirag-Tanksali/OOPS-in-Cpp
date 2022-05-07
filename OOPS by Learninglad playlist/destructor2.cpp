#include<iostream>
#include<string>
using namespace std;

class Human{
private:
    string *name;
    int *age;
public:
    Human(string iname, int iage){
        name= new string;
        age=new int();

        *name=iname;
        *age=iage;
    }

    void display(){
        cout<<"Hi I am "<<*name<<" and I am "<<*age<<" years old"<<endl;
    }

    ~Human(){
        delete name;
        delete age;
        cout<<"All memories are released"<<endl;
    }

};

int main() {

    Human *chirag =new Human("Chirag",21);
    chirag->display();

    delete chirag;





return 0;
}