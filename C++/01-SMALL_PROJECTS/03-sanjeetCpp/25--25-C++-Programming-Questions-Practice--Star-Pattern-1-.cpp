// -25 C++ Programming Questions Practice : Star Pattern 1
#include <iostream>
using namespace std;


int main(){
    int sideStars = 1;
    for (int i=0;i<32;i++){
        for (int j=0;j<sideStars;j++){
            cout<<"*";
        }
        cout<<endl;
        sideStars++;
    }

return 0;
}