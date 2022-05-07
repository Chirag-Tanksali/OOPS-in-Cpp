#include <iostream>
#include <string>
using namespace std;

class Person{
public:
string *name;
int age;

    Person(string name,int age){
    this->name = new string(name);
    this->age = age;
    }

    Person(const Person &p){
    cout << "copy constructor is called "<<endl;
    name = new string(*p.name);
    age = p.age;
    }

    void changeNameandAge(string name,int age){
    *(this->name) = name;
    this->age = age;
    }

    void introduce(){
    cout << "hey i am "<<*name<<" and i am "<<age<<" years old"<<endl;
    }
};

int main()
{
    Person chirag("chirag",21);
    chirag.introduce();

    Person duplicatechirag = chirag;
    duplicatechirag.introduce();

    chirag.changeNameandAge("Chirag Tanksali",22);
    chirag.introduce();
    duplicatechirag.introduce();
    return 0;
}