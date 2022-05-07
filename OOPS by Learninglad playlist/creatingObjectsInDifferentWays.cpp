#include <iostream>
#include <string>
using namespace std;
class Human
{
public:
    string name;
    void introduce()
    {
        cout << "hi " << name << endl;
    }
};
int main()
{
    Human Chirag;  //Stored in stack
    Human *bunty = new Human(); //Stored in heap
    Chirag.name = "Chirag";
    Chirag.introduce();
    bunty->name = "bunty";
    bunty->introduce();
    return 0;
}