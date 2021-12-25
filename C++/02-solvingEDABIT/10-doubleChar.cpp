
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;
std::string doubleChar(std::string str) {
	std::string r="";
    for (auto s:str){
        r+=s+s;
    }
    return r;
}

std::string doubleChar(std::string str){
    std::string r="";
    for (auto a:str){
        r.append(2,a);
    }
    return r;
}




std::string doubleChar(std::string str) {
std::vector<char> v1;
	for (int i=0;i<str.length();i++){
		v1.push_back(str[i]);
		v1.push_back(str[i]);
	}
	std::string re="";
	for (auto a:v1){
		re+=a;
	}
	return re;
}




int main()
{
    cout<<doubleChar("XYZ")<<endl;

}
