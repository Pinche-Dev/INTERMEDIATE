// -24 C++ Programming Questions Practice : LCM and HCF Together

#include <iostream>
using namespace std;

void HCFnLCM(int n1,int n2){
    int smaller = min(n1,n2);
    int greater = max(n1,n2);

bool isNotFound = true;
    for (int i = smaller;isNotFound = true;i--){
        if (n1%i==0&&n2%i==0){
            cout<<i<<" is  HCF"<<endl;
            isNotFound = false;
            break;
        }
    }
 isNotFound = true;
    for (int i = smaller;isNotFound = true;i++){
        if (i%n1==0&&i%n2==0){
            cout<<i<<" is LCM"<<endl;
            isNotFound = false;
            break;
        }
    }

}

int main(){
    

HCFnLCM(22,23);
return 0;
}