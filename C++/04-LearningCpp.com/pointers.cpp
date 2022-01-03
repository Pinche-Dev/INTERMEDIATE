#include <iostream>
using namespace std;

int main()
{
int arr[]={1,2,3,4,5,6,7,8,9,10};
int *ap = arr;
int rep = 23;
for (auto a:arr){
    *ap = rep;
    ap++;
    rep++;
}

for(auto a:arr){
    cout<<a<<endl;
}
}
