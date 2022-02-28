#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(4);
    s.insert(5);
    int element = 6;
    bool is_in = s.find(element) != s.end();
    cout << is_in << endl;
}
