#include <iostream>

using namespace std;

class Marks{
int mark;
public:
    Marks(){
    mark = 0;
    }
    Marks(int m){
    mark = m;
    }
    void YourMarkPlease(){
    cout << "your mark is "<<mark<<endl;
    }

    void operator+=(int bonusmark){
    mark = mark + bonusmark;
    }

    friend void operator-=(Marks &curObj, int redmark);

};

void operator-=(Marks &curObj, int redmark){

curObj.mark -= redmark;
}

int main()
{
    Marks chiragsmark(45);
    chiragsmark.YourMarkPlease();

    int x = 20;

    chiragsmark += x;
    chiragsmark.YourMarkPlease();

    chiragsmark -= x;
    chiragsmark.YourMarkPlease();

    return 0;
}