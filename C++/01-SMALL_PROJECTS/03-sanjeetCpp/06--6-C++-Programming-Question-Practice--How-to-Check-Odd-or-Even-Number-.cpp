// -6 C++ Programming Question Practice : How to Check Odd or Even Number

#include <iostream>
using namespace std;


int main(){
    cout<<"Please Enter a number: ";
int n1;
    cin>>n1;
    
    if (n1%2!=0){
        cout<<"The number "<<n1<<" is odd"<<endl;
    }else{
        cout<<"The number "<<n1<<" is even"<<endl;
    }

return 0;
}