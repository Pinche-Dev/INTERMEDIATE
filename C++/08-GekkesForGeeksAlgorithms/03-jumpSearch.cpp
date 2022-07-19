#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int jumpSearch(vector<int> v,int x){
    int jumpby;
    int jumps = 0;
    int iteration = 0;
    int size = v.size();
    if (size<20){
        jumpby = 4;
    }else if (size<200){
        jumpby =10;
    }else if (size<1000){
        jumpby = 50;
    }else{
        jumpby = 75;
    };

    int index = 0;
    while (index<size){
        // jumps++;
    // cout<<jumps<<endl;
        
        index+=jumpby;
        if (v[index]>x){
            for (int i=index;i>0;i--){
                if (v[i]==x){
                    return i;
                }
            }
        }
    }
    return -1;
}

int main()
{
vector<int> v = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
cout<<jumpSearch(v,9)<<'\n';
}
