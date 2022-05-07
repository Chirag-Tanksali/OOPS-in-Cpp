#include <iostream>
using namespace std;

// void display(){

//     static int counter=0; //Stored in heap
//     cout<<"Display function called "<<++counter<<" times"<<endl;
// }

class Human
{
public:
    static int human_count;

    Human()
    {
        human_count++;
    }

    void humanTotal()
    {
        cout << "There are " << human_count << " peoples in this program" << endl;
    }
};

int Human::human_count = 0;

int main()
{

    // display();
    // display();
    // display();
    // display();
    // display();

    cout << Human::human_count << endl;
    Human chirag;
    Human chirag1;
    Human chirag2;
    Human chirag3;
    chirag.humanTotal();
    cout << Human::human_count << endl;

    cout<<endl;

    Human::human_count;
    cout<<Human::human_count<<endl;
    return 0;
}