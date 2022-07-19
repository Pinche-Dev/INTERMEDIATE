#include <iostream>
using namespace std;

template <typename T,int N>
class Array{
    T m_array[N];
    public:
    int GetSize() {return N;};
};
int main()
{
    Array<int,5> arr1;
    int size= arr1.GetSize();
    cout<<size<<endl;

}
