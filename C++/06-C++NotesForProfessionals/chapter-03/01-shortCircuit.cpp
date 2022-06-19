#include <iostream>
#include <string>
using namespace std;

bool True(string id){
    cout<<"True "<<id<<endl;
    return true;
}
bool False(string id){
    cout<<"False "<<id<<endl;
    return false;
}

int main()
{
    /* code */
    bool result;
    result = False("i")||True("asdf");
    result = False("i")&&True("asdf");
    return 0;
}
