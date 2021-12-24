#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

std::vector<int> sortNumsAscending(std::vector<int> arr)
{
    for (int j = 0; j < size(arr); j++)
    {

        for (int i = 0; i < size(arr) - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (auto a : arr)
    {
        cout << a << endl;
    }
    return arr;
}

int main()
 {
    vector<int> v1 = {3, 1, 22, 23, 25, 1, 2, 3, 4, 5, 2, 36, 5, 4};
    sortNumsAscending(v1);
    cout << endl;
    vector<int> v2 = {3, 1, 22, 23, 25, 1, 2, 3, 4, 5, 2, 36, 5, 4};

    // std::sort(v2.begin(), v2.end());
    // for (auto a : v2)
    // {
    //     cout << a << endl;
    // }
        std::sort(v2.end(), v2.begin());
    for (auto a : v2)
    {
        cout << a << endl;
    }
}