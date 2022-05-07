#include<iostream>
#include<string>
using namespace std;

class Human{
        public:
        string name="no name";
        void introduce();
};

// string Human :: name="noname";  //Error: human::name is not a static member of class

//thus scope resoluyion operator is used to define methods outside class and static members of class
void Human:: introduce(){
    cout<<Human::name<<endl;
}

int main() {

    Human chirag;
    // chirag.name="Chirag";

    chirag.introduce();



return 0;
}