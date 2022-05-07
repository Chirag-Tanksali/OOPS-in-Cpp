#include<iostream>
#include<string>
using namespace std;

class Human{
    private:
        string name;
        int age;
    public:
        Human(){
            name="noname";
            age=20;
            cout<<"Constructor is called"<<endl;
        }

        void display(){
            cout<<name<<endl<<age<<endl;
        }

        // Human();
};

// Human::Human(){
//     cout<<"Constructor called outside class"<<endl;
// }

int main() {

    Human chirag; //constructor is automatically called when you create an object

    chirag.display();


return 0;
}