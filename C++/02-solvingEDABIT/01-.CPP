#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1="Hello-world";
    string arr[]=s1.split("-");
    cout<<size(arr)<<endl;
    cout<<string::find(s1,"-")<<endl;
}
