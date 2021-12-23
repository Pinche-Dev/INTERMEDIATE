// -22 C++ Programming Questions Practice : HCF of Two Numberssss
#include <iostream>
using namespace std;

void HCF(int n1, int n2)
{
    int greater;
    int smaller;
    if (n1 < n2)
    {
        smaller = n1;
        greater = n2;
    }
    else
    {
        smaller = n2;
        greater = n1;
    }
    for (int i = greater / 2+1; i > 0; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            cout << i << " is  the HCF" << endl;
            return;
        }
    }
}

int main()

{

HCF(12,6);
    return 0;

}