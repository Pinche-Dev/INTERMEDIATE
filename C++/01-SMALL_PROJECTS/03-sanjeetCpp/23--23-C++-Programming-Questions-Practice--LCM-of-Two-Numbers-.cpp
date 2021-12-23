// -23 C++ Programming Questions Practice : LCM of Two Numbers

#include <iostream>
#include <vector>
using namespace std;

void LCM(int n1,int n2){
    bool isNotFound = true;

    int smaller = min(n1,n2);
    for (int i=smaller;isNotFound=true;i++){
        if (i%n1==0&&i%n2==0){
            cout<<i<<" is  the LCM"<<endl;
            return;
        }
    }
    cout<<smaller<<endl;
}

int main(){

LCM(22,34);
LCM(44,222);

}