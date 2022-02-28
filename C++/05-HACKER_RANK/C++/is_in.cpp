#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> container;
    container.insert(4);
    int element =4;
    const bool is_in = container.find(element) != container.end();
    cout<<is_in<<endl;
is_in?cout<<"in"<<endl:cout<<"not in"<<endl;

}
