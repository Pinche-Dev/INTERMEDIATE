#include <iostream>
using namespace std;



int gr(int n){
    int r=5;
    int count = 0;
    while(n>r){
        r = count*5;
        count++;
    }
    count = count-1;
    return count*5;
}
int main()
{
    int g = gr(43);
    cout<<g<<endl;
}