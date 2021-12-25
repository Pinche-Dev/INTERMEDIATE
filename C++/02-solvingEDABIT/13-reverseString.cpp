
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;




std::string reverse(std::string str) {
	return std::string(str.rbegin(), str.rend());
}


std::string reverse(std::string str) {
  std::reverse(str.begin(),str.end());
  return str;
}




std::string reverse(std::string str){
    char C;
    for (int j=0;j<str.length()-1;j++){
        for (int i=0;i<str.length()-i-1;i++){
            if (str[i]<str[i+1]){
                C = str[i+1];
                str[i+1] = str[i];
                str[i] = C;
            }
        }
    }
    return str;
}

int main()
{
    cout<<reverse("asdfasdfasdf")<<endl;
}
