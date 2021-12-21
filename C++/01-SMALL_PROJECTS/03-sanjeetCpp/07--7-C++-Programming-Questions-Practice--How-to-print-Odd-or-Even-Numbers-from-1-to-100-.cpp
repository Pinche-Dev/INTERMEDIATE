// -7  C++ Programming Questions Practice : How to print Odd or Even Numbers from 1 to 100

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter O if you want to print odd number from 1-100 or E for even: ";
    char C;
    cin >> C;
    bool printODD;
    if (C == 'O' || C == 'o')
    {
        printODD = true;
    }
    else if (C == 'E' || C == 'e')
    {
        printODD = false;
    }
    else
    {
        cout << "Please enter char betwteen E || O" << endl;
    }
    for (int i = 0; i < 101; i++)
    {
        if (printODD)
        {
            if (i % 2 != 0)
            {
                cout << i << endl;
            }
        }
        else
        {
            if (i % 2 == 0)
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}