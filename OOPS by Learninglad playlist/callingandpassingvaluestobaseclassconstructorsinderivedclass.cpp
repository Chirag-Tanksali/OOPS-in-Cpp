#include <iostream>
#include<string>

using namespace std;

class Father{
protected:
    int height;
public:
    Father(){
    cout << "constructor of father is called"<<endl;

    }

};
class Mother{
protected:
    string skincolor;
public:
    Mother(){
    cout << "constructor of mother is called"<<endl;

    }

};

class Child : public Father,public Mother{
public:
    Child(int x,string color) : Father(),Mother(){
    height = x;
    skincolor = color;
    cout << "child classs constructor"<<endl;
    }
void display(){
cout << "height is "<<height<<" skin color is "<<skincolor<<endl;
}
};


int main()
{
    Child chirag(24,"while");
    chirag.display();
    return 0;
}