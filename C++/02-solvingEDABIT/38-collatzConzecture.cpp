#include <iostream>
using namespace std;
int count = 0;
int collatz(int num)
{
    while (num != 1)
    {

        if (num % 2 == 0)
        {
            num = num / 2;
        }
        else
        {
            num = num * 3 + 1;
        }
        count++;
        collatz(num);
    }
}
int main()
}
