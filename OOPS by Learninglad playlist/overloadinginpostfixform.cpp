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
    void yourMarkPlease(){
        cout << "your mark is "<<mark<<endl;
    }
    Marks operator++(int){
    Marks duplicate(*this);
    mark += 1;
    return duplicate;
    }

    friend Marks operator--(Marks&,int);

};

Marks operator--(Marks &m,int){
    Marks duplicate(m);
    m.mark -= 1;
    return duplicate;
}

int main()
{

    Marks chirag(68);
    chirag.yourMarkPlease();

    (chirag--).yourMarkPlease();
    chirag.yourMarkPlease();

    return 0;
}