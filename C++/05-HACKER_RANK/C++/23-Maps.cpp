#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string, int> m;
    int q;
    cin >> q;
    int x;
    string name;
    int marks = 0;
    while (q--)
    {
        cin >> x;
        if (x == 1)
        {
            cin >> name >> marks;
            if (m.find(name) == m.end())
            {
                m.insert(make_pair(name, marks));
            }
            else
            {
                m[name] += marks;
            }
        }
        else if (x == 2)
        {
            cin >> name;
            m.erase(name);
        }
        else if (x == 3)
        {
            cin >> name;
            m.find(name)!=m.end()?cout<<m.find(name)->second<<endl:cout<<"0"<<endl;

        }
    }
    return 0;
}
