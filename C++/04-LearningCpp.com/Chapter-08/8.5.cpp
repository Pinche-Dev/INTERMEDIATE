#include <iostream>
using namespace std;

int main()
{
    // Explicit Type Casting
    // C style Cast

    int x{10};
    int y = {4};

    double d{(double) x/y};
    double d1 = x/y;
    cout<<d<<endl;


    // static_cast
    char c{'q'};
    cout<<"q == "<<static_cast<int>(c)<<endl;
}
