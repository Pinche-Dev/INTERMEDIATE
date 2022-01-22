#include <iostream>
using namespace std;
int ZZZ = 0;
bool X()
{
    if (ZZZ % 2 == 0)
    {
        ZZZ++;
        return true;
    }
    else
    {
        ZZZ++;
        return false;
    }
}
int main()
{
    for (int i = 0; i < 400; i++)
    {
        if (X())
        {
            cout << i << endl;
        }
    }
    cout << X() << endl;
    cout << X() << endl;
}
