#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


int binarySearch(vector<int> v,int x){
    int high = v.size();
    int low= 0;
    while (high - low>1){
        int mid = (high+low)/2;

        if(v[mid]==x){
            return mid;
        }else if(v[mid]>x){
            high = mid;
        }else{
            low = mid;
     
        }
    }
    return -1;
}

int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    vector<int> v1 = {23,34,123,2,123,1,23,1,23,123,1,23,12,3,155};
    cout<<binarySearch(v,6)<<endl;
    std::sort(v1.begin(),v1.end());
    cout<<binarySearch(v1,3)<<endl;
}


