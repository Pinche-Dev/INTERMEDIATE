// -18 C++ Programming Questions Practice : Reverse of a Number
#include <iostream>
#include <string>
using namespace std;

string reverse(long int number)
{

    string temp = to_string(number);
    string reverse = "";

    for (int i = 0 ;i<size(temp);i++){
        reverse += temp[temp.length()-i-1];
    }
    return reverse;
}

int main()
{

string r = reverse(123123123123);
cout<<r<<endl;
    return 0;
}