#include<iostream>
#include<string>
using namespace std;

class Human{
    private:
        string name;
        int age;
    public:
        Human(){
            cout<<"Default Constructor"<<endl;
            name="noname";
            age=0;
        }

        Human(string iname="noname",int iage=0){
            cout<<"Overloaded constructor"<<endl;
            name=iname;
            age=iage;
        }

        void display(){
            cout<<name<<endl<<age<<endl;
        }
};

int main() {

    Human chirag;
    chirag.display();

    Human Chirag1("chirag",20);
    Chirag1.display();

return 0;
}