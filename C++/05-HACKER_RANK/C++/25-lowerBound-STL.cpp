// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// 
// int main()
// {
    // /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // int N;
    // int X;
    // int Q;
    // int Y;
    // cin >> N;
    // vector<int> Vec;
    // while (N--)
    // {
        // cin >> X;
        // Vec.push_back(X);
    // }
    // cin >> Q;
    // while (Q--)
    // {
        // cin >> Y;
        // if (*find(Vec.begin(), Vec.end(), Y))
        // {
            // for (int i = 0; i < Vec.size(); i++)
            // {
                // if (Y == Vec[i])
                // {
                    // cout << "Yes " << i + 1 << endl;
                // break;
                // }
            // }
        // }else{
            // for (int i=0;i<Vec.size();i++){
                // if (Y<Vec[i]){
                    // cout<<"No "<<i+1<<endl;
                    // break;
                // }
            // }
        // }
    // }
    // return 0;
// }
// 

#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main(){
    int N;
    int X;
    vector<int> data;
    int Q;
    int Y;

    cin>>N;
    while (N--){
        cin>>X;
        data.push_back(X);
    }
    cin>>Q;
    while(Q--){
        cin>>Y;
        int index = lower_bound(data.begin(),data.end(),Y)-data.begin();
        if (data[index]==Y){
            cout<<"Yes "<<index+1<<endl;
        }else{
            cout<<"No "<<index+1<<endl;
        }
    }
    return 0;
}