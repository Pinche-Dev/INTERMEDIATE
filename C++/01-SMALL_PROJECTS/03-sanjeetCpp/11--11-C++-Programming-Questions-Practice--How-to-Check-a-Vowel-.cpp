// -11 C++ Programming Questions Practice : How to Check a Vowel

#include <iostream>
using namespace std;
char C;
int main()
{
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    cout << "Enter a character: ";
    cin >> C;
    for (int i = 0; i < size(vowels); i++)
    {
        if (C == vowels[i])
        {
            cout << C << " is a vowel" << endl;
            return 0;
        }
    }
    cout << C << " is not a vowel" << endl;

    return 0;
}