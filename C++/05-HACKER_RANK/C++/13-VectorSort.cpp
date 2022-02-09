#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a;
    int count=0;
    int N;
    cin>>N;
    vector<int> v1;
    while (count<N)
    {
        cin>>a;
        v1.push_back(a);
        count++;
    }
    sort(v1.begin(),v1.end());

    for(auto a:v1){
        cout<<a<<" ";
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
