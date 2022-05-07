#include <iostream>
#include <string>
using namespace std;


class Person{
protected:
    string name;
public:
    void setName(string iname){
    name = iname;
    }
};

class Student : public Person{
public:
    void display(){
    cout << name <<endl;
    }

};


int main()
{
Student chirag;
chirag.setName("chirag");
chirag.display();


    return 0;
}