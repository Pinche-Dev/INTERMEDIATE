#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    short a{4};
    short b{5};
    cout<<typeid(a+b).name()<<endl;
    cout<<typeid(a).name()<<endl;

}
