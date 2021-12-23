// -16 C++ Programming Questions Practice : Print Prime Numbers from 1 to 100

#include <iostream>
using namespace std;
void print()
{

    for (int i = 0; i < 101; i++)
    {
        bool isPrime = true;
        for (int j = i / 2; j > 1; j--)
        {
            if (i % j == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime)
        {
            cout << i << " is a prime number" << endl;
        }
        // else
        // {
        //     cout << i << " is not a prime number" << endl;
        // }
    }
}
int main()
{
    print();

    return 0;
}