#include <iostream>
using namespace std;

class H{
    public:
    H(){
        cout<<"Calling the default constructor "<<endl;
        cout<<"Doing the task A"<<endl;
    }
    H(int x):H(){
        cout<<x<<" is the parmas"<<'\n';
        cout<<"doing the task B"<<'\n';
    }
};
int main()
{
    H(12);

}
