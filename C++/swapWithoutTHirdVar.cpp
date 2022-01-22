#include <iostream>
using namespace std;


int main()
{

    int v1{42};
    int *p1 = &v1;
    char c1{'C'};
    char *cp1 = &c1;

    cout<<p1<<endl;
    cout<<cp1<<endl;

}
