#include <iostream>
#include <string>

using namespace std;
void studentList();
int main()
{
    studentList();

     return 0;
}

void studentList(){
class Student{
public:
    string name;
    int age;

    void display(){
    cout <<name <<endl<<age<<endl;
    }
};

Student chirag;
chirag.name = "chirag";
chirag.age = 21;
chirag.display();
}