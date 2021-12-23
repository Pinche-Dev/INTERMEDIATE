// -26 C++ Programming Questions Practice : Star Pattern 2
#include <iostream>
using namespace std;


int main(){
    int sideStars = 30;

    for (int i=0;i<32;i++){
        for (int j=0;j<sideStars;j++){
            cout<<"*";
        }
        sideStars--;
        cout<<endl;
    }

return 0;
}