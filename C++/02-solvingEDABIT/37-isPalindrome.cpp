#include <iostream>
using namespace std;


bool checkPalindrome(std::string str) {
	std::string Str = str;
	std::reverse(str.begin(),str.end());
	
	if (Str==str){
		return true;
	}else{
		return false;
	}
	
}
bool checkPalindrome(std::string str) {

	return (str == std::string(str.rbegin(), str.rend()));
}

int main()
{

}
