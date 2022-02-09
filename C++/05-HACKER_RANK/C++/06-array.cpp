#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    int arr[N];
    int count = 0;
    int x;
    while (count < N)
    {
        cin >> x;
        arr[count] = x;
        count++;
    }
    for (int i=N-1;i>-1;i--){
        // cout<<i<<endl;
        cout<<arr[i]<<" ";
    }

    return 0;
}
