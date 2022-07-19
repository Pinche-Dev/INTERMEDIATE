#include <iostream>
using namespace std;

template <typename T>
T Add(T x,T y){
    return x+y;
}

int main()
{
    cout<<Add(1,2)<<endl;
    cout<<Add(1.1,2.5)<<endl;
    cout<<Add(1,2)<<endl;
}
