#include <iostream>
#include <vector>
using namespace std;

int linear_search(vector<int> v,int x){
    for (int i=0;i<v.size();i++){
        if (x==v[i]){
            return i;
        }
    }
    return -1;
    
}
int main()
{
vector<int> v={1,2,34,5,56,3,4,2345,23,45,234,5,2345,12};
cout<<linear_search(v,5)<<'\n';
}
