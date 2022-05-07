#include <iostream>
#include <stdexcept>

using namespace std;

void test() throw(int,char,runtime_error){

throw runtime_error("what the hack");

}

int main()
{
    try{
    test();
    }catch(int e){
    cout <<" integer type "<< e <<endl;
    }
    catch(char c){
    cout <<" character type "<< c <<endl;
    }
    catch(runtime_error r){
    cout <<" runtime error type "<< r.what() <<endl;
    }

    return 0;
}