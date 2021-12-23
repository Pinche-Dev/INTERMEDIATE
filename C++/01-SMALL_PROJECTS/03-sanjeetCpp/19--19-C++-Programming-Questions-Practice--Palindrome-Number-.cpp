// -19 C++ Programming Questions Practice : Palindrome Number

#include <iostream>
using namespace std;

void isPalindromeNumber(int n1)
{
    string s = to_string(n1);
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - 1 - i])
        {
            cout<<"not a palindrome"<<endl;
            return;
        }
    }
    cout<<"is a palindrome"<<endl;
}

int main()
{
isPalindromeNumber(123);
isPalindromeNumber(1231321);
isPalindromeNumber(123321);
    return 0;
}