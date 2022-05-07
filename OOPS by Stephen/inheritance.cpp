#include<iostream>
#include<string>
using namespace std;

//BELOW IS ALSO AN EXAMPLE FOR SINGLE INHERITANCE

//Parent or base class
class Teacher{
    public:
    Teacher(){
        cout<<"I'm a Teacher"<<endl;
    }

    string collegeName="Youtube College"; 
};

//child or derived class
class MathTeacher: public Teacher{
    public:
    MathTeacher(){
        cout<<"I'm a Math Teacher"<<endl;
    }
};

int main(){

    MathTeacher obj;
    cout<<"College name is "<<obj.collegeName<<endl;
    
    return 0;
}