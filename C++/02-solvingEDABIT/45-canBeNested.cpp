#include <algorithm>
bool canNest(std::vector<int> arr1, std::vector<int> arr2)
{
    std::sort(arr1.begin(), arr1.end());
    std::sort(arr2.begin(), arr2.end());

    if (arr1[0] > arr2[0] && arr1.back() < arr2.back())
    {
        return true;
    }
    return false;
}