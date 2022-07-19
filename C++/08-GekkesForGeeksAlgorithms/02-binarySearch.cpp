#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int binarySearch(vector<int> v,int x){
    int high = v.size(),low = 0;
    // cout<<high<<endl;
    while(high-low>1){
    int mid = (high+low)/2;
    cout<<"mid "<<mid<<endl;
        if (v[mid]==x){
            return mid;
        }else if (v[mid]<x){
            low = mid;
        }else{
            high = mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    vector<int> v1 = {23,34,123,2,123,1,23,1,23,123,1,23,12,3,155};
    cout<<binarySearch(v,6);
    std::sort(v1.begin(),v1.end());
    cout<<binarySearch(v1,3)<<endl;
}
