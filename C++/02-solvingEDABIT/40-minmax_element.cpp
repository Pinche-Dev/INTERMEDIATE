#include <algorithm>  
#include <iostream>  
#include <vector>  
using  namespace std;  
  
int main()  
{  
    vector<int> v = { 3, 9, 1, 4, 2, 5, 9 };  
   
    auto result = minmax_element(v.begin(), v.end());  
    cout << "min element at: " << (result.first - v.begin()) << '\n';  
    cout << "max element at: " << (result.second - v.begin()) << '\n';  
    cout<<*(result.first)<<endl;
  
    return 0;  
}  