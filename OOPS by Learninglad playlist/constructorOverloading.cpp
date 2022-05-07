#include<iostream>
#include<string>
using namespace std;

class Human{
    private:
        int age;
        string name;
    public:
        Human(){
            cout<<"Default Constructor is called"<<endl;
            age=0;
            name="no name";
        }

        Human(string iname){
            cout<<" Constructor with name as parameter is called"<<endl;
            age=0;
            name=iname;
        }

        Human(int iage){
            cout<<" Constructor with age as parameter is called"<<endl;
            age=iage;
            name="no name";
        }

        Human(string iname,int iage){
            cout<<" Constructor with name and age as parameter is called"<<endl;
            age=iage;
            name=iname;
        }

        void display(){
            cout<<name<<endl<<age<<endl;
        }
};

int main() {
    //When object is created,default constructor is called automatically
    Human chirag;
    chirag.display();
    cout<<endl;


    Human chirag1("CHIRAG");
    chirag1.display();
    cout<<endl;


    Human chirag2("CHIRAG",20);
    chirag2.display();
    cout<<endl;


    Human chirag3("20");
    chirag3.display();
    cout<<endl;

return 0;
}