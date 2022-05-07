#include<iostream>
using namespace std;

class Human{
    private:
        int age;
        int modifyAge(){
            return age-5;
        }  //By private method we can hide internal working of data

    public:
        void getage(){
            cout<<age<<endl;
            // cout<<modifyAge()<<endl;
        }
        void setage(int value){
            age=value;
        }
};

int main() {

    Human chirag;
    chirag.setage(21);
    chirag.getage();  


    return 0;
}