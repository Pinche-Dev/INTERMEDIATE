#include <iostream>
using namespace std;
int reverse(int number)
{

    int reverse_number = 0;
    while (number != 0)
    {
        reverse_number = reverse_number * 10;
        reverse_number = reverse_number + number % 10;
        number = number / 10;
    }
    return reverse_number;
}
int nextMultiple(int i)
{
    int num = 5;
    int with = 1;
    while (num < i)
    {
        num+=5;
        with++;
    }
    return num;
}
int main()
{
    char c = 'a';
    char c1 = 'z';
    cout << int(c) << endl;
    cout << int(c1) - 97 << endl;
    cout << 1 % 2 << endl;
    cout << (9.0 / 6) << endl;
    cout << reverse(456) << endl;
    cout << reverse(23) << endl;
    cout << 5 / 2 << endl;
    cout<<nextMultiple(43)<<endl;
    cout<<nextMultiple(42)<<endl;
    cout<<444%1000<<endl;
    string s="ss";

    cout<<s.length()<<endl;
    cout<<s.size()<<endl;

    char ch = '2';
    cout<<int(ch)<<endl;
}
