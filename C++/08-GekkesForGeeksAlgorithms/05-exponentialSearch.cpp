#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int> v,int low,int high,int x){
    // int high = v.size();
    // int low= 0;
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

int exponentialSearch(vector<int> v,int x){
    if(v[0]==x){
        return 0 ;
    }
    int i =1;
    while (i<v.size()&&v[i]<=x){
        i = i*2;
    }
    return binarySearch(v,i/2,i,x);
}

int main(void)
{
   vector<int> arr = {2, 3, 4, 10, 40};
   int x = 10;
   int result = exponentialSearch(arr, x);
   (result == -1)? cout <<"Element is not present in array"
                 : cout <<"Element is present at index " << result;
   return 0;
}

