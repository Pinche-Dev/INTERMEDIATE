#include <iostream>
using namespace std;

int main()
{
    // brace initialization doesnot allow type conversion
    int x = {3.5};
    cout << x << endl;
}
