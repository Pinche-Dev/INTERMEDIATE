#include <iostream>
#include <vector>
using namespace std;

std::vector<int> amplify(int n) {
    
    vector<int> v1;
    for (int i=1;i<n+1;i++){
        if (i%4==0){
            v1.push_back(i*10);
        }else{
            v1.push_back(i);
        }
    
    }

    for (auto a:v1){
        cout<<a<<endl;
    }
    return v1;


}
std::vector<int> amplify(int n) {
	std::vector<int> out;
	for(int i = 1; i <= n; i++)
		out.push_back((i % 4) ? i : 10*i);
	return out;
}
int main()
{
    amplify(12);
}
