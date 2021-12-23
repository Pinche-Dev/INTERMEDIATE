// -13 C++ Programming Questions Practice : Factorial Program

#include <iostream>
using namespace std;

void fiboN(int steps)
{

    int prev = 0;
    int next = -1;
    int temp = 0;

    for (int i = 0; i < steps; i++)
    {
        if (i < 2)
        {
            cout << i << endl;
            next++;
        }
        else
        {
            cout<<prev+next<<endl;
            temp = next;
            next = prev +next;
            prev = temp;

        }
    }
}

int main()
{
    fiboN(23);

    return 0;
}