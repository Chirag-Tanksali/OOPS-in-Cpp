#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    string name;
    int age;
    void setName(string iname) { name = iname; }
    void setAge(int iage) { age = iage; }
};
class Student : public Person
{
public:
    int id;
    void setId(int iid) { id = iid; }
    void introduce()
    {
        cout << "Hi I am " << name << " and I am " << age << " years old " << endl<< " and my student id is " << id;
    }
};
int main()
{
    Student chirag;
    chirag.setName("chirag");
    chirag.setAge(21);
    chirag.setId(12345);
    chirag.introduce();
    return 0;
}