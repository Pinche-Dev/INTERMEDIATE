#include <iostream>
#include <vector>
using namespace std;

int valueCount(vector<int> v,int x){
    int count=0;
    for (int i=0;i<v.size();i++){
        if (x==v[i]){
            count++;
        }
    }
    cout<<"There are "<<count<<" number of "<<x<<endl;
    return count;
}
int main()
{
vector<int> v={1,2,34,5,56,32,2,2,2,2,4,2345,23,45,234,5,2345,12};
   valueCount(v,2); 

}
