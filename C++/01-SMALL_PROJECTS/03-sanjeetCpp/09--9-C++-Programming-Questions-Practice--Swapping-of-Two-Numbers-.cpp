// -9 C++ Programming Questions Practice : Swapping of Two Numbers

#include <iostream>
using namespace std;

void swap(int &n1,int &n2){
    int  n3 = n2;
    n2 = n1;
    n1 = n3;
}

int main(){
    int i = 1;
    int j = 2;
    cout<<"i ="<<i<<endl;
    cout<<"j ="<<j<<endl;

swap(i,j);

    cout<<"i ="<<i<<endl;
    cout<<"j ="<<j<<endl;
return 0;
}