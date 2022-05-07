#include <iostream>
using namespace std;

/*syntax
class class_name{
    
};*/ 

class car{
    char color[20];
    public:
        int speed;
    
        void getdata(int distance,int fuel){
            cout<<"The car has covered "<<distance<<" kms and has consumed "<<fuel<<"L fuel."<<endl;
        }
        
        void mileage(float distance,float fuel);

        void carspeed(){
            cout<<"The car speed is "<<speed<<endl;
        }
}audi;

void car:: mileage(float d,float f){
    float carmileage=d/f;
    
    cout<<"The car mileage is "<<carmileage<<endl;
}

int main()
{   
    
    car tiago;
    // tiago.getdata(130,5);
    // tiago.mileage(130,5);
    
    // audi.getdata(30,2);
    // audi.mileage(30,2);

    tiago.speed=50;
    tiago.carspeed();

    return 0;
}