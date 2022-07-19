#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int interpolationSearch(vector<int> v, int x)
{
    int pos;
    int low = 0;
    int hi = v.size();

    if (low <= hi && v[hi] >= x && v[low] >= x)
    {
        pos =low+ (((double)(hi-low)/v[hi]-v[low])*(x-v[low]));
        // pos = low + (((double)(hi - low) / (v[hi] - v[low])) * (x - v[low]));
    }
    cout << pos << endl;
    return pos;
}
int main()
{
    // Array of items on which search will
    // be conducted.
    vector<int> arr = {10, 12, 13, 16, 18, 19, 20, 21,
                       22, 23, 24, 33, 35, 42, 47};

    // Element to be searched
    int x = 18;
    int index = interpolationSearch(arr, x);

    // If element was found
    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found.";

    return 0;
}
