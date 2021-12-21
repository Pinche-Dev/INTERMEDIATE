// -4 C++ Programming Question Practice :  Print Table of 2-3-4-5-6-7-8-9-10


#include <iostream>
using namespace std;


int main(){
    for (int i = 1 ;i<10+1;i++){
        for (int j=1;j<15+1;j++){
            cout<<i<<" * "<<j<<" = "<<i*j<<endl;
        }
        cout<<endl;
    }

return 0;
}