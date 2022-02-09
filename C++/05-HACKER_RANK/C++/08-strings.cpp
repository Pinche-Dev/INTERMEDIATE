#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Complete the program
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;

    cout << s1.size() << " " << s2.size() << "\n";
    cout << s1 + s2 << "\n";
    string temp = s1;
    string temp2 = s2;
    s1[0] = temp2[0];
    s2[0] = temp[0];
    cout<<s1<<" "<<s2<<endl;
    return 0;
}