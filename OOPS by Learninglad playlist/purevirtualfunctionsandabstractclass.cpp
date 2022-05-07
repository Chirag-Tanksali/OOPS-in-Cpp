#include <iostream>

using namespace std;

class Person
{
public:
    virtual void introduce() = 0;
};

void Person ::introduce()
{
    cout << "Hey from person" << endl;
}

class Student : public Person
{
public:
    void introduce()
    {
        cout << "Hi i am a student" << endl;
        Person ::introduce();
    }
};

int main()
{
    Student chirag;
    chirag.introduce();
    return 0;
}