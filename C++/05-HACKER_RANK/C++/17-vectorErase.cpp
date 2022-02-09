#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    vector<int> V;
    int Rpos;
    int RposX,RposY;

    cin>>N;
    int count = 0;
    int pb;
    while (count<N){
        cin>>pb;
        V.push_back(pb);
        count++;
    }
    cin>>Rpos;
    cin>>RposX>>RposY;
    V.erase(V.begin()+Rpos-1);
    V.erase(V.begin()+RposX-1,V.begin()+RposY-1);
    cout<<V.size()<<endl;
    for (auto a:V){
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}
