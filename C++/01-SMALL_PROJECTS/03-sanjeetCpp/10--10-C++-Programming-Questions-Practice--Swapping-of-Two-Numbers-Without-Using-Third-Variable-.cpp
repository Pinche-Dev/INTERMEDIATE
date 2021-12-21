// -10 C++ Programming Questions Practice : Swapping of Two Numbers Without Using Third Variable
#include <iostream>
using namespace std;

void swap(int *x,int *y){
    x = y;
    y = x;
}

int main(){
    int a = 456;
    int b = 789;

    cout<<"a"<<" = "<<a<<endl;
    cout<<"b"<<" = "<<b<<endl;

cout<<endl;
cout<<"swapping"<<endl;
swap(a,b);
cout<<endl;

    cout<<"a"<<" = "<<a<<endl;
    cout<<"b"<<" = "<<b<<endl;
return 0;
}