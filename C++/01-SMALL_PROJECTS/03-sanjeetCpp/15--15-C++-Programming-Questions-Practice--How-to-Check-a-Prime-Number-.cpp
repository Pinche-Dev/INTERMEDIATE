// -15 C++ Programming Questions Practice : How to Check a Prime Number

#include <iostream>
using namespace std;

void isPrime(int NUM)
{
    for (int i = NUM / 2; i > 1; i--)
    {
        if (NUM % i == 0)
        {
            cout << NUM << " is not a prime number" << endl;
            return;
        }
    }
        cout << NUM << " is a prime number" << endl;
}

int main()
{

    isPrime(23);
    isPrime(7);

    isPrime(77);
    return 0;
}