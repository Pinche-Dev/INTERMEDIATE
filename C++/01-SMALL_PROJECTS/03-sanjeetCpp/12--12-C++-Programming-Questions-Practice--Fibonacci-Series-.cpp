
// -12 C++ Programming Questions Practice : Fibonacci Series
#include <iostream>
using namespace std;

void print_fibo(int upto){
    int next = 0;
    int prev = 0;
    int temp = 0 ;
    while(next<upto){
        if (next < 1){
            cout<<1<<endl;
next++;
        }else{
            
            cout<<prev+next<<endl;
            temp = next;
            next = prev+next;
            prev = temp;
        }
    }
}

int main(){
    print_fibo(23);

return 0;
}